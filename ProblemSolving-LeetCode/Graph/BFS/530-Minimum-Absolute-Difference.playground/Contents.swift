public class TreeNode {
    public var val: Int
    public var left: TreeNode?
    public var right: TreeNode?
    public init() { self.val = 0; self.left = nil; self.right = nil; }
    public init(_ val: Int) { self.val = val; self.left = nil; self.right = nil; }
    public init(_ val: Int, _ left: TreeNode?, _ right: TreeNode?) {
        self.val = val
        self.left = left
        self.right = right
    }
}

class Solution {
    func bfs(_ root: TreeNode?) -> Int {
        var queue: [TreeNode?] = [root]
        var nodeValues: [Int] = []
        var minDiff: Int = Int.max

        while !queue.isEmpty {
            let curNode = queue.removeFirst()
            nodeValues.append(curNode!.val)
            
            if let leftNode = curNode?.left {
                queue.append(leftNode)
            }
            if let rightNode = curNode?.right {
                queue.append(rightNode)
            }
        }
        
        nodeValues.sort()
        for idx in 1..<nodeValues.count {
            minDiff = min(minDiff, abs(nodeValues[idx-1]-nodeValues[idx]))
        }
        
        return minDiff
        
    }
    
    func getMinimumDifference(_ root: TreeNode?) -> Int {
        bfs(root)
    }
}
