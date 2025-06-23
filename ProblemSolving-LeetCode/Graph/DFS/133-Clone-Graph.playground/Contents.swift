
public class Node {
    public var val: Int
    public var neighbors: [Node?]
    public init(_ val: Int, _ neighbors: [Node?] = []) {
        self.val = val
        self.neighbors = neighbors
    }
}

class Solution {
    var visitedNodes: [Int: Node?] = [:]
    
    func dfs(node: Node?) -> Node? {
        guard let node else { return nil }
        
        if let existingNode = visitedNodes[node.val] {
            return existingNode
        }
        
        var currentNode = Node(node.val)
        visitedNodes[node.val] = currentNode
        
        for neighbor in node.neighbors {
            let neighNode = dfs(node: neighbor)
            currentNode.neighbors.append(neighNode)
        }
        
        return currentNode
    }
    
    func cloneGraph(_ node: Node?) -> Node? {
        dfs(node: node)
    }
}

let obj = Solution()
let root = Node(1, [Node(2, [Node(1), Node(3, [Node(2), Node(4)])]), Node(4, [Node(1), Node(3)])])
let res = obj.cloneGraph(root)
var queue: [Node?] = [root]

var resultStr = ""
while !queue.isEmpty {
    var next = queue.removeFirst()
    resultStr += ("\(next!.val) ")
    
    for neighbor in next!.neighbors {
        queue.append(neighbor)
    }
}
print(resultStr)
