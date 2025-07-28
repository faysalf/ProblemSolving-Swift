struct Table {
    let row: Int
    let col: Int
}

class Solution {
    
    func bfs(_ image: inout [[Int]], row: Int, col: Int, color: Int) -> [[Int]] {
        if image[row][col] == color {
            return image
        }
        var queue: [Table] = [Table(row: row, col: col)]
        var sourceColor = image[row][col]
        var sz_row = image.count
        var sz_col = image[0].count
        
        while !queue.isEmpty {
            let first = queue.removeFirst()
            
            if image[first.row][first.col] == sourceColor {
                image[first.row][first.col] = color
            }
            
            if first.row > 0 && image[first.row-1][first.col] == sourceColor {
                queue.append(Table(row: first.row-1, col: first.col))
            }
            if first.row < sz_row-1 && image[first.row+1][first.col] == sourceColor{
                queue.append(Table(row: first.row+1, col: first.col))
            }
            if first.col > 0 && image[first.row][first.col-1] == sourceColor {
                queue.append(Table(row: first.row, col: first.col-1))
            }
            if first.col < sz_col-1 && image[first.row][first.col+1] == sourceColor {
                queue.append(Table(row: first.row, col: first.col+1))
            }
        }
        
        return image
        
    }
    
    func floodFill(_ image: [[Int]], _ sr: Int, _ sc: Int, _ color: Int) -> [[Int]] {
        var image = image
        
        return bfs(&image, row: sr, col: sc, color: color)
        
    }
}
