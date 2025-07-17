
class Solution {
    var target = 0
    var queue: [[Int]] = []
    var res: [[Int]] = []
    
    func bfs(_ graph: [[Int]]) {
        while !queue.isEmpty {
            let path = queue.removeFirst()
            let lastNode = path.last!
            
            for neighbor in graph[lastNode] {
                var newPath = path
                newPath.append(neighbor)
                
                if neighbor == target {
                    res.append(newPath)
                }else {
                    queue.append(newPath)
                }
                
            }
            
        }
        
    }
    
    func allPathsSourceTarget(_ graph: [[Int]]) -> [[Int]] {
        target = graph.count - 1
        queue = [[0]]
        bfs(graph)
        
        return res
    }
    
}

let obj = Solution()
debugPrint(obj.allPathsSourceTarget([[1,2],[3],[3], []]))
