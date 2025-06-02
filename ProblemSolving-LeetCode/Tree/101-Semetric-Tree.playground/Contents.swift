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

extension TreeNode: Equatable {
    public static func == (lhs: TreeNode, rhs: TreeNode) -> Bool {
        return true
    }
}

class Solution {
    func isSymmetric(_ root: TreeNode?) -> Bool {
        if root?.left == nil || root?.right == nil {
            root?.left == root?.right
        }
        if let left = root?.left, let right = root?.right {
            return isSymmetric(left) && isSymmetric(right)
        }
        
        return false
    }
}


