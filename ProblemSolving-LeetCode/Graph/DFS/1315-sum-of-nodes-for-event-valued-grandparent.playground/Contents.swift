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
    var sum = 0

    func dfs(grand: Int, parent: Int, currentNode: TreeNode?) {
        guard let currentNode else { return }
        
        if grand&1 == 0 {
            sum += currentNode.val
        }
        
        dfs(grand: parent, parent: currentNode.val, currentNode: currentNode.left)
        dfs(grand: parent, parent: currentNode.val, currentNode: currentNode.right)
        
    }
    
    func sumEvenGrandparent(_ root: TreeNode?) -> Int {
        dfs(grand: 1, parent: 1, currentNode: root)
        
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
