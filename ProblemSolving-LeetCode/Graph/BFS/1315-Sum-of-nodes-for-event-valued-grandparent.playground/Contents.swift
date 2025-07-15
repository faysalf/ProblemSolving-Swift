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
    var sum = 0

    func bfs(_ root: TreeNode?) {
        queue = [root]
        while !queue.isEmpty {

            let sz = queue.count
            for _ in 0..<sz {
                let node = queue.removeFirst()
                
                if let left = node?.left {
                    queue.append(left)
                    addValueToSum(grand: node!, parent: left)
                }
                
                if let right = node?.right {
                    queue.append(right)
                    addValueToSum(grand: node!, parent: right)
                }
                
            }
            
        }
        
    }
    
    func addValueToSum(grand: TreeNode, parent: TreeNode) {
        if (grand.val&1 == 0) {
            sum += parent.left?.val ?? 0
            sum += parent.right?.val ?? 0
        }
    }
    
    func sumEvenGrandparent(_ root: TreeNode?) -> Int {
        bfs(root)
        
        return sum
    }
}

// Test
let obj = Solution()
let res = obj.sumEvenGrandparent(
    TreeNode(
        6,
        TreeNode(
            7,
            TreeNode(
                2,
                TreeNode(9),
                nil
            ),
            TreeNode(
                7,
                TreeNode(1),
                TreeNode(4)
            )
        ),
        TreeNode(
            8,
            TreeNode(1),
            TreeNode(
                3,
                nil,
                TreeNode(5)
            )
        )
    )
)
print(res)
