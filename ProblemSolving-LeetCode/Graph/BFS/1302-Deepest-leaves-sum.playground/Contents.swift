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
    var queue: [TreeNode?] = []
    
    func bfs(_ root: TreeNode?) -> Int {
        var sum = 0

        while !queue.isEmpty {
            let sz = queue.count
            
            debugPrint("Sum of levels - \(sum)")
            sum = 0
            for _ in 0..<sz {
                let node = queue.removeFirst()
                sum += node?.val ?? 0
                
                if let left = node?.left {
                    queue.append(left)
                }
                
                if let right = node?.right {
                    queue.append(right)
                }
                
            }
        }
        
        return sum
        
    }
    
    func deepestLeavesSum(_ root: TreeNode?) -> Int {
        queue = [root]
        
        return bfs(root)
    }
}

let obj = Solution()
let res = obj.deepestLeavesSum(TreeNode(1, TreeNode(2, TreeNode(4, TreeNode(7), nil), TreeNode(5)), TreeNode(3, nil, TreeNode(6, nil, TreeNode(8)))))
print(res)
