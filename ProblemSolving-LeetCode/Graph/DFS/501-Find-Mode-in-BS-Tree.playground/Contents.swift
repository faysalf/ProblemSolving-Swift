
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
    var modeElements: Set<Int> = []
    
    func dfs(_ node: TreeNode?, _ lastValue: Int) {
        guard let node = node else {
            return
        }
        
        if node.val == lastValue {
            modeElements.insert(node.val)
        }
        
        dfs(node.left, node.val)
        dfs(node.right, node.val)
        
    }
    
    func findMode(_ root: TreeNode?) -> [Int] {
        dfs(root, -1)
        
        if modeElements.isEmpty {
            return [root?.val ?? 0]
        }
        return Array(modeElements)
    }
}
