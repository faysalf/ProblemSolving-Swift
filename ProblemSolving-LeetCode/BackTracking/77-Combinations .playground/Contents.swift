
class Solution {
    func combine(_ n: Int, _ k: Int) -> [[Int]] {
        var combinations: [[Int]] = []
        
        func findCombination(currentComb: inout [Int], cnt: Int, lastInsertedVal: Int) {
            if cnt == k {
                combinations.append(currentComb)
                return
            }
            if lastInsertedVal == n { return }
            
            for value in lastInsertedVal+1...n {
                currentComb.append(value)
                findCombination(currentComb: &currentComb, cnt: cnt+1, lastInsertedVal: value)
                currentComb.removeLast()
            }
            
        }
        var curComb: [Int] = []
        findCombination(currentComb: &curComb, cnt: 0, lastInsertedVal: 0)
        
        return combinations
        
    }
    
}

let solution = Solution()
debugPrint(solution.combine(4, 2))
