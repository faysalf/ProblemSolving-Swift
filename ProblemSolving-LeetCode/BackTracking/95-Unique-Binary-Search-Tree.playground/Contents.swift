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
    func generateTrees(_ n: Int) -> [TreeNode?] {
        var result: [TreeNode] = []
        var isVisited: [Bool] = Array(repeating: false, count: 8)
        
        func findUniqueTrees(curLength: Int, currentTree: TreeNode) {
            if curLength == n {
                result.append(currentTree)
                return
            }
            
            for i in 1...n {
                if !isVisited[i] {
                    isVisited[i] = true
                    currentTree.left = TreeNode(i)
                    findUniqueTrees(curLength: curLength+1, currentTree: currentTree)
                    currentTree.left = nil
                    currentTree.right = TreeNode(i)
                    findUniqueTrees(curLength: curLength+1, currentTree: currentTree)
                    currentTree.right = nil
                    isVisited[i] = false
                }
            }
            
        }
        
        for i in 1...n {
            isVisited[i] = true
            let root: TreeNode = TreeNode(i)
            findUniqueTrees(curLength: 1, currentTree: root)
            isVisited[i] = false
        }
        
        return result
    }
    
}
