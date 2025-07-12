public class TreeNode {
    public var val: Int
    public var left: TreeNode?
    public var right: TreeNode?
    public init() {
        self.val = 0; self.left = nil; self.right = nil;
    }
    public init(_ val: Int) {
        self.val = val; self.left = nil; self.right = nil;
    }
    public init(_ val: Int, _ left: TreeNode?, _ right: TreeNode?) {
        self.val = val
        self.left = left
        self.right = right
    }
}

class Solution {
    func dfs(_ node1: TreeNode?, _ node2: TreeNode?) -> TreeNode? {
        guard let node1 else {
            return node2
        }
        guard let node2 else {
            return node1
        }
        
        node1.val += node2.val
        
        node1.left = dfs(node1.left, node2.left)
        node1.right = dfs(node1.right, node2.right)

        return node1
    }
    
    
    func mergeTrees(_ root1: TreeNode?, _ root2: TreeNode?) -> TreeNode? {
        if root1 == nil {
            return root2
        }
        dfs(root1, root2)
        
        return root1
    }
}
