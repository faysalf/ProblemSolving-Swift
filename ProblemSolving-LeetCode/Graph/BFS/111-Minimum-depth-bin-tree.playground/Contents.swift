
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
    public init(
        _ val: Int,
        _ left: TreeNode?,
        _ right: TreeNode?
    ) {
        self.val = val
        self.left = left
        self.right = right
    }
}

class Solution {
    var visitedNodes: Set<Int> = []
    
    func bfs(
        _ node : TreeNode
    ) -> Int {
        var queue: [(TreeNode, Int)] = [(node, 1)]
        
        while !queue.isEmpty {
            let node = queue.removeFirst()
            
            if node.0.left == nil && node.0.right == nil {
                return node.1
            }
            
            if let left = node.0.left {
                queue.append((left, node.1 + 1))
            }
            
            if let right = node.0.right {
                queue.append((right, node.1 + 1))
            }
                        
        }
        
        return 0
        
    }
    
    func minDepth(_ root: TreeNode?) -> Int {
        guard let root else { return 0 }
        
        return bfs(root)
        
    }
}

// [3,9,20,null,null,15,7]
var obj = Solution()
var res = obj.minDepth(TreeNode(3, TreeNode(9), TreeNode(20, TreeNode(15), TreeNode(17))))
//[2,null,3,null,4,null,5,null,6]
//var res = obj.minDepth(TreeNode(2, nil, TreeNode(3, nil, TreeNode(4, nil, TreeNode(5, nil, TreeNode(6))))))
print(res)
