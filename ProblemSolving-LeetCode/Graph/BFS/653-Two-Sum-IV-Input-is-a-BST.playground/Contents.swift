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
    private func bfs(_ node: TreeNode?, target: Int) -> Bool {
        var queue: [TreeNode?] = [node]
        var existingValues: Set<Int> = []
        
        while !queue.isEmpty {
            let current = queue.removeFirst()
            
            if existingValues.contains(target - current!.val) {
                return true
            }
            existingValues.insert(current!.val)
            
            if let left = current?.left {
                queue.append(left)
            }
            if let right = current?.right {
                queue.append(right)
            }
            
        }
        
        return false
        
    }
    
    
    func findTarget(_ root: TreeNode?, _ k: Int) -> Bool {
        bfs(root, target: k)
    }
    
}
