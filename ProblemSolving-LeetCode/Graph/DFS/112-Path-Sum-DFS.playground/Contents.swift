
public class TreeNode {
    public var val: Int
    public var left: TreeNode?
    public var right: TreeNode?
    public init() {
        self.val = 0;
        self.left = nil;
        self.right = nil;
    }
    public init(_ val: Int) {
        self.val = val;
        self.left = nil;
        self.right = nil;
    }
    public init(_ val: Int, _ left: TreeNode?, _ right: TreeNode?) {
        self.val = val
        self.left = left
        self.right = right
    }
}

class Solution {
    var result: [Int] = []

    func dfs(
        _ node : TreeNode?,
        target: Int,
        currentSum: Int
    )-> Bool {
        guard let node else { return false }

        if node.left == nil && node.right == nil {
            return (currentSum + node.val) == target
        }
        return (dfs(node.left, target: target, currentSum: currentSum + node.val)
                || dfs(node.right, target: target, currentSum: currentSum + node.val))

    }
    
    func hasPathSum(_ root: TreeNode?, _ targetSum: Int) -> Bool {
        dfs(root, target: targetSum, currentSum: 0)
                
    }
}

//[1,2,3,4,5,null,8,null,null,6,7,9]
var obj = Solution()
var res = obj.hasPathSum(TreeNode(1, TreeNode(2, TreeNode(4), TreeNode(5, TreeNode(6), TreeNode(7))),
                                         TreeNode(3, nil, TreeNode(8, TreeNode(9), nil))), 15)
print(res)
