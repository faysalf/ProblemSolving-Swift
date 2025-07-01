
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
    func dfs(_ node: TreeNode?, isLeft: Bool = false, sum: inout Int) {
        guard let node else { return }
        
        if node.left == nil && node.right == nil {
            if isLeft {
                sum += node.val
            }
            return
        }
        
        dfs(node.left, isLeft: true, sum: &sum)
        dfs(node.right, sum: &sum)

    }
    
    func sumOfLeftLeaves(_ root: TreeNode?) -> Int {
        var sum = 0
        dfs(root, sum: &sum)
        
        return sum
    }
}

//[3,9,20,null,null,15,7]
var obj = Solution()
var res = obj.sumOfLeftLeaves(TreeNode(3, TreeNode(9), TreeNode(20, TreeNode(15), TreeNode(7))))
//[2,null,3,null,4,null,5,null,6]
//var res = obj.binaryTreePaths(TreeNode(2, nil, TreeNode(3, nil, TreeNode(4, nil, TreeNode(5, nil, TreeNode(6))))))
print(res)
