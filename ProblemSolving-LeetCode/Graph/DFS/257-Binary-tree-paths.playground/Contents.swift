
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
    
    var paths: [String] = []
    
    func dfs(_ node: TreeNode?, _ path: String) {
        guard let node else { return }
        
        if node.left == nil && node.right == nil {
            paths.append(path+"\(path.isEmpty ? "" : "->")\(node.val)")
            return
        }
        
        dfs(node.left, path+"\(path.isEmpty ? "" : "->")\(node.val)")
        dfs(node.right, path+"\(path.isEmpty ? "" : "->")\(node.val)")

    }
    
    func binaryTreePaths(_ root: TreeNode?) -> [String] {
        dfs(root, "")
        
        return paths
    }
}

// [3,9,20,null,null,15,7]
var obj = Solution()
var res = obj.binaryTreePaths(TreeNode(1, TreeNode(2, nil, TreeNode(5)), TreeNode(3)))
//[2,null,3,null,4,null,5,null,6]
//var res = obj.binaryTreePaths(TreeNode(2, nil, TreeNode(3, nil, TreeNode(4, nil, TreeNode(5, nil, TreeNode(6))))))
print(res)
