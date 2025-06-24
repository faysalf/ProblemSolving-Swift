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
    let min_int = -Int.max
    func measureHeight(_ node: TreeNode?, prevHeight: Int) -> Int {
        guard let node else { return 0 }

        let leftNodeHeight = measureHeight(node.left, prevHeight: prevHeight+1)
        let rightNodeHeight = measureHeight(node.right, prevHeight: prevHeight+1)
        
        return max(leftNodeHeight, rightNodeHeight) + 1
        
    }
    
    func isBalanced(_ root: TreeNode?) -> Bool {
        guard let root else { return true }
        
        if !isBalanced(root.left) || !isBalanced(root.right) {
            return false
        }
        
        let leftHeight = measureHeight(root.left, prevHeight: 0)
        let rightHeight = measureHeight(root.right, prevHeight: 0)
        return abs(leftHeight - rightHeight) <= 1
        
    }

}


//class Solution {
//    let min_int = -Int.max
//    func measureHeight(_ node: TreeNode?) -> Int {
//        guard let node else { return 0 }
//        
//        let leftNodeHeight = measureHeight(node.left)
//        if leftNodeHeight == min_int {
//            return min_int
//        }
//        
//        let rightNodeHeight = measureHeight(node.right)
//        if rightNodeHeight == min_int {
//            return min_int
//        }
//        
//        if abs(leftNodeHeight - rightNodeHeight) > 1 {
//            return min_int
//        }
//        
//        return max(leftNodeHeight, rightNodeHeight) + 1
//
//    }
//    
//    func isBalanced(_ root: TreeNode?) -> Bool {
//        measureHeight(root) != min_int
//        
//    }
//
//}

