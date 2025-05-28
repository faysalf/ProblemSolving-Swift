
class Solution {
    var visited: Set<Int> = []
    var graph: [Int: [Int]] = [:]
    
    func dfs(node: Int, destination: Int) -> Bool {
        if (node == destination) {
            return true
        }
        
        visited.insert(node)
        for nb in graph[node, default: []] {
            if !(visited.contains(nb)) {
                if dfs(node: nb, destination: destination) {
                    return true
                }
            }
        }
        
        return false
    }
    
    func validPath(
        _ n: Int,
        _ edges: [[Int]],
        _ source: Int,
        _ destination: Int
    ) -> Bool {
        for edge in edges {
            graph[edge[0], default: []].append(edge[1])
            graph[edge[1], default: []].append(edge[0])
        }
        
        return dfs(node: source, destination: destination)
    }
}

var edges = [[0,1],[0,2],[3,5],[5,4],[4,3]]
let solObj = Solution()
print(solObj.validPath(5, edges, 0, 5))
print(solObj.graph)
