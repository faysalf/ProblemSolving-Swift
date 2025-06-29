
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
    var minimumPath = Int(1e5 + 1)

    func dfs(
        _ node : TreeNode?,
        currentPathCount: Int
    ) {
        guard let node else {
            return
        }
        if node.left == nil && node.right == nil {
            minimumPath = min(minimumPath, currentPathCount+1)
            return
        }

        dfs(node.left, currentPathCount: currentPathCount+1)
        dfs(node.right, currentPathCount: currentPathCount+1)

    }
    
    func minDepth(_ root: TreeNode?) -> Int {
        guard let root else {
            return 0
        }
        dfs(root, currentPathCount: 0)
        
        return minimumPath
    }
}

// [3,9,20,null,null,15,7]
var obj = Solution()
//var res = obj.minDepth(TreeNode(3, TreeNode(9), TreeNode(20, TreeNode(15), TreeNode(17))))
//[2,null,3,null,4,null,5,null,6]
var res = obj.minDepth(TreeNode(2, nil, TreeNode(3, nil, TreeNode(4, nil, TreeNode(5, nil, TreeNode(6))))))
print(res)
