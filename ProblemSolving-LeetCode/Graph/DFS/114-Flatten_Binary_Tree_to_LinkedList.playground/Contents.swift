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
    func flatten(_ root: TreeNode?) {
        var newRoot: TreeNode? = TreeNode(0, nil, nil)
        var newNode = newRoot
        
        func flat(node: TreeNode?) {
            guard let node else { return }
            
            newNode?.right = TreeNode(node.val)
            newNode = newNode?.right
            
            flat(node: node.left)
            flat(node: node.right)
            
        }
        flat(node: root)
        root?.left = nil
        root?.right = newRoot?.right?.right
    }
}

let boj = Solution()
let res = boj.flatten(
    TreeNode(
        1,
        TreeNode(
            2,
            TreeNode(3),
            TreeNode(4)
        ),
        TreeNode(
            5,
            nil,
            TreeNode(6)
        )
    )
)
print("Called", res)
