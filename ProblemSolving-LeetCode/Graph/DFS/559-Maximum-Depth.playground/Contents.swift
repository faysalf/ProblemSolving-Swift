public class Node {
    public var val: Int
    public var children: [Node]
    public init (_ val: Int) {
        self.val = val
        self.children = []
    }
    public init(_ val: Int, children: [Node]) {
        self.val = val
        self.children = children
    }
}



class Solution {
    var maxDepth = 0

    func dfs(_ root: Node?, _ depth: Int) {
        guard let root else {
            maxDepth = max(maxDepth, depth)
            return
        }
        
        if root.children.isEmpty {
            self.maxDepth = max(maxDepth, depth)
        }
        
        for child in root.children {
            dfs(child, depth + 1)
        }
        
    }
    
    func maxDepth(_ root: Node?) -> Int {
        guard let root else {
            return 0
        }
        dfs(root, 1)
        
        return maxDepth
    }
}

let obj = Solution()
//[1,null,3,2,4,null,5,6]
let root = Node(1, children: [Node(2), Node(3, children: [Node(5), Node(6)]), Node(4)])
let res = obj.maxDepth(root)
print(res)
