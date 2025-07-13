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

// Using BFS
class Solution {
    var queue: [TreeNode?] = []
    var levelNo = 0
    
    func bfs() {
        while !queue.isEmpty {
            let sz = queue.count
            var labelNodes: [TreeNode?] = []
            
            for _ in 0..<sz {
                let node = queue.removeFirst()
                labelNodes.append(node)
                
                guard let left = node?.left, let right = node?.right else { continue }
                queue.append(left)
                queue.append(right)
            }
            
            if levelNo&1 == 1 {
                var i = 0, j = labelNodes.count - 1
                while(i < j) {
                    let temp = labelNodes[i]!.val
                    labelNodes[i]?.val = labelNodes[j]!.val
                    labelNodes[j]?.val = temp
                    
                    i+=1; j-=1;
                }
            }
            
            levelNo += 1
        }
        
        
    }
    
    func reverseOddLevels(_ root: TreeNode?) -> TreeNode? {
        queue = [root]
        bfs()
        
        return root
    }
}







// MARK: - Accepted solution - using DFS

//class Solution {
//    func dfs(_ left: TreeNode?, right: TreeNode?, levelNo: Int) {
//        guard let left, let right else { return }
//        
//        if levelNo&1 == 1 {
//            let temp = left.val
//            left.val = right.val
//            right.val = temp
//        }
//        
//        dfs(left.left, right: right.right, levelNo: levelNo+1)
//        dfs(left.right, right: right.left, levelNo: levelNo+1)
//        
//    }
//    
//    func reverseOddLevels(_ root: TreeNode?) -> TreeNode? {
//        dfs(root?.left, right: root?.right, levelNo: 1)
//        
//        return root
//    }
//}
