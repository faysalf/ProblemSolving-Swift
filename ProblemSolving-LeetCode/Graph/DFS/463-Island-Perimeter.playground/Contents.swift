class Solution {
    func islandPerimeter(_ grid: [[Int]]) -> Int {
        var perimeter = 0
        
        for r in 0..<grid.count {
            for c in 0..<grid[r].count {
                if grid[r][c] == 1 {
                    perimeter += 4
                    
                    if r > 0, grid[r-1][c] == 1 {
                        perimeter -= 1
                    }
                    if r+1 < grid.count, grid[r+1][c] == 1 {
                        perimeter -= 1
                    }
                    if c > 0, grid[r][c-1] == 1 {
                        perimeter -= 1
                    }
                    if c+1 < grid[r].count, grid[r][c+1] == 1 {
                        perimeter -= 1
                    }
                    
                }
            }
        }
        
        return perimeter
    }
}

var obj = Solution()
let res = obj.islandPerimeter([[0,1,0,0],[1,1,1,0],[0,1,0,0],[1,1,0,0]])
print(res)
