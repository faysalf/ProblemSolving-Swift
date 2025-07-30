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
    private func bfs(_ node: TreeNode?) -> Int {
        var queue: [TreeNode?] = [node]
        var values: [Int] = []
        var sz = 0
        
        while !queue.isEmpty {
            let curNode = queue.removeFirst()
            values.append(curNode!.val)
            sz += 1
            
            if let leftNode = curNode?.left {
                queue.append(leftNode)
            }
            
            if let rightNode = curNode?.right {
                queue.append(rightNode)
            }
            
        }
        
        values.sort()
        var minDist = Int.max
        for idx in 1..<sz {
            minDist = min(minDist, abs(values[idx] - values[idx - 1]))
        }
        
        return minDist
        
    }
    
    func minDiffInBST(_ root: TreeNode?) -> Int {
        bfs(root)
    }
}

let obj = Solution()
let res = obj.minDiffInBST(
    TreeNode(
        4,
        TreeNode(
            2,
            TreeNode(1),
            TreeNode(3)
        ),
        TreeNode(6)
    )
)
print(res)
