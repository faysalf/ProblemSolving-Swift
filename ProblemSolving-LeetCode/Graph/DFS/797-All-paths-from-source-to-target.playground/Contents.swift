
class Solution {
    var target = 0
    var graph: [[Int]] = []
    var res: [[Int]] = []
    
    func dfs(_ path: [Int]) {
        let lastNode = path.last!
        
        if lastNode == target {
            res.append(path)
            return
        }
        
        for neighbor in graph[lastNode] {
            dfs(path + [neighbor])
        }
        
    }
    
    func allPathsSourceTarget(_ graph: [[Int]]) -> [[Int]] {
        target = graph.count - 1
        self.graph = graph
        dfs([0])
        
        return res
    }
    
}

let obj = Solution()
debugPrint(obj.allPathsSourceTarget([[1,2],[3],[3], []]))
