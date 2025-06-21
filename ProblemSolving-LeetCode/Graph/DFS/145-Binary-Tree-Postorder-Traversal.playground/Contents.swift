
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
    var result: [Int] = []

    func dfs(_ node : TreeNode?) {
        guard let node else { return }
        
        dfs(node.left)
        dfs(node.right)
        result.append(node.val)
    }
    
    func postorderTraversal(_ root: TreeNode?) -> [Int] {
        dfs(root)
        
        return Array(result)
        
    }
}

//[1,2,3,4,5,null,8,null,null,6,7,9]
var obj = Solution()
var res = obj.postorderTraversal(TreeNode(1, TreeNode(2, TreeNode(4), TreeNode(5, TreeNode(6), TreeNode(7))),
                                         TreeNode(3, nil, TreeNode(8, TreeNode(9), nil))))
//print(res)
