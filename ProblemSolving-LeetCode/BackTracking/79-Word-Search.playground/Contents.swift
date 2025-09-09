class Solution {
    func exist(_ board: [[Character]], _ word: String) -> Bool {
        var board = board
        let rows = board.count
        let cols = board[0].count
        let wordArr = Array(word)
        let wordLen = wordArr.count
        var existed = false
        var isVisited = Array(repeating: Array(repeating: false, count: cols), count: rows)
        
        func dfs(_ r: Int, _ c: Int, _ idx: Int) {
            if existed { return }
            if idx == wordLen {
                existed = true
                return
            }
            if r < 0 || c < 0 || r >= rows || c >= cols { return }
            if (board[r][c] != wordArr[idx] || isVisited[r][c]) { return }
            
            isVisited[r][c] = true
            
            dfs(r+1, c, idx+1)
            dfs(r-1, c, idx+1)
            dfs(r, c+1, idx+1)
            dfs(r, c-1, idx+1)
            
            isVisited[r][c] = false
        }
        
        for r in 0..<rows {
            for c in 0..<cols {
                if board[r][c] == wordArr[0] {
                    dfs(r, c, 0)
                    if existed { return true }
                }
            }
        }
        
        return existed
    }
    
}

let obj = Solution()
let res = obj.exist([["A","B","C","E"],["S","F","C","S"],["A","D","E","E"]], "ABCB")
let res1 = obj.exist([
    ["C","A","A"],
    ["A","A","A"],
    ["B","C","D"]], "AAB")
let res2 = obj.exist([
    ["A","B","C","E"],
    ["S","F","E","S"],
    ["A","D","E","E"]], "ABCESEEEFS")
let res3 = obj.exist([
    ["A","A","A","A","A","A"],
    ["A","A","A","A","A","A"],
    ["A","A","A","A","A","A"],
    ["A","A","A","A","A","A"],
    ["A","A","A","A","A","A"],
    ["A","A","A","A","A","A"]], "AAAAAAAAAAAAAAB")
debugPrint(res == true ? "Word existed": "Word doesn't existed")




/*
class Solution {
    func exist(_ board: [[Character]], _ word: String) -> Bool {
        var existed = false
        var word: [Character] = word.map { $0 }
        var wordCnt = word.count
        var rowSize = board.count
        var colSize = board[0].count

        for row in 0..<board.count {
            for col in 0..<board[row].count {
                if board[row][col] == word[0] {
                    var isVisited = Array(repeating: Array(repeating: false, count: colSize), count: rowSize)
                    isVisited[row][col] = true
                    findWords(curRow: row, curCol: col, cnt: 1, isVisited: isVisited, res: [(row, col)])
                }
            }
        }
        
        func findWords(curRow: Int, curCol: Int, cnt: Int, isVisited: [[Bool]], res: [(Int, Int)]) {
            if (cnt == wordCnt) {
                if board[curRow][curCol] == word[cnt-1] {
                    debugPrint("Output String Indices for existance: \(res)")
                    existed = true
                }
                return
            }
            debugPrint("Tracking Result Indices \(res)")
            debugPrint("Current word size - \(cnt), word total size - \(wordCnt)")
            debugPrint("col-1 \(curCol-1), col+1 \(curCol+1), row-1 \(curRow-1), row+1 \(curRow+1)")
            
            //1 -1, 1 +1, -1 1, +1 1,
            if curCol > 0 && (!isVisited[curRow][curCol-1]) && board[curRow][curCol-1] == word[cnt] {
                var isVisited = isVisited
                isVisited[curRow][curCol-1] = true
                findWords(curRow: curRow, curCol: curCol-1, cnt: cnt+1, isVisited: isVisited, res: res + [(curRow, curCol-1)])
            }
            
            if curCol < colSize-1 && (!isVisited[curRow][curCol+1]) && board[curRow][curCol+1] == word[cnt] {
                var isVisited = isVisited
                isVisited[curRow][curCol+1] = true
                findWords(curRow: curRow, curCol: curCol+1, cnt: cnt+1, isVisited: isVisited, res: res + [(curRow, curCol+1)])
            }
            
            if curRow > 0 && (!isVisited[curRow-1][curCol]) && board[curRow-1][curCol] == word[cnt] {
                var isVisited = isVisited
                isVisited[curRow-1][curCol] = true
                findWords(curRow: curRow-1, curCol: curCol, cnt: cnt+1, isVisited: isVisited, res: res + [(curRow-1, curCol)])
            }
            
            if curRow < rowSize-1 && (!isVisited[curRow+1][curCol]) && board[curRow+1][curCol] == word[cnt] {
                var isVisited = isVisited
                isVisited[curRow+1][curCol] = true
                findWords(curRow: curRow+1, curCol: curCol, cnt: cnt+1, isVisited: isVisited, res: res + [(curRow+1, curCol)])
            }

        }
        
        return existed
        
    }
    
}

let obj = Solution()
let res = obj.exist([["A","B","C","E"],["S","F","C","S"],["A","D","E","E"]], "ABCB")
let res1 = obj.exist([
    ["C","A","A"],
    ["A","A","A"],
    ["B","C","D"]], "AAB")
let res2 = obj.exist([
    ["A","B","C","E"],
    ["S","F","E","S"],
    ["A","D","E","E"]], "ABCESEEEFS")
debugPrint(res2 == true ? "Word existed": "Word doesn't existed")
*/
