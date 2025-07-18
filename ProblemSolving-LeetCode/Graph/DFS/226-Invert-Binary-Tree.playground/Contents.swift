
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
    
    func dfs(_ node: TreeNode?) -> TreeNode? {
        guard let node else { return nil }
        
        let right = node.right
        node.right = node.left
        node.left = right
        
        dfs(node.left)
        dfs(node.right)
        
        return node
    }
    
    func invertTree(_ root: TreeNode?) -> TreeNode? {
        dfs(root)
        
    }
}
