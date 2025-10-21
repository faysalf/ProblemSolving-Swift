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
    func pathSum(_ root: TreeNode?, _ targetSum: Int) -> [[Int]] {
        var numPaths: [[Int]] = []
        
        func dfs(node: TreeNode?, paths: inout [Int], sum: Int) {
            guard let node else { return }
            paths.append(node.val)
            
            if (node.left == nil && node.right == nil && sum + node.val == targetSum) {
                numPaths.append(paths)
            }
            dfs(node: node.left, paths: &paths, sum: sum + node.val)
            dfs(node: node.right, paths: &paths, sum: sum + node.val)
            paths.removeLast()
            
        }
        
        var paths: [Int] = []
        dfs(node: root, paths: &paths, sum: 0)
        
        return numPaths
    }
}

//let obj = Solution()
//let res = obj.pathSum(
//    TreeNode(
//        5,
//        TreeNode(
//            4,
//            TreeNode(
//                11,
//                TreeNode(7),
//                TreeNode(2)
//            ),
//            nil
//        ),
//        TreeNode(
//            8,
//            TreeNode(13),
//            TreeNode(
//                4,
//                TreeNode(5),
//                TreeNode(1)
//            )
//        )
//    ),
//    22
//)
//debugPrint(res)
