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

//1. rate derite ghumaben na
//2. sokale ghumaben na, Nabi (sw) sokale borkoter jonye dua korechhen
//3. mobile addiction bad dite hobe

class Solution {
    private func bfs(_ root: TreeNode?) -> [Double] {
        var queue: [TreeNode?] = [root]
        var result: [Double] = []
        
        while !queue.isEmpty {
            let sz = queue.count
            var levelSum: Int = 0
            
            for idx in 0..<sz {
                var currentNode = queue.removeFirst()
                levelSum += currentNode!.val
                
                if let leftNode = currentNode?.left {
                    queue.append(leftNode)
                }
                if let rightNode = currentNode?.right {
                    queue.append(rightNode)
                }
            }
            
            result.append(Double(levelSum) / Double(sz))
        }
        
        return result

    }
    
    func averageOfLevels(_ root: TreeNode?) -> [Double] {
        bfs(root)
        
    }
    
}
