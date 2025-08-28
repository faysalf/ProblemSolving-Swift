class Solution {
    
    func combinationSum(_ candidates: [Int], _ target: Int) -> [[Int]] {
        var combinations: [[Int]] = []
        var sz = candidates.count
        
        func findCombinations(curIdx: Int, target: Int, current: inout [Int]) {
            if target == 0 {
                combinations.append(current)
                return
            }
            
            for idx in curIdx..<sz {
                if candidates[idx] <= target {
                    current.append(candidates[idx])
                    findCombinations(curIdx: idx, target: target-candidates[idx], current: &current)
                    current.removeLast()
                }
            }
            
        }
        
        var current: [Int] = []
        findCombinations(curIdx: 0, target: target, current: &current)
        
        return combinations
    }
    
}

var obj = Solution()
let res = obj.combinationSum([2,3,6,7], 7)
debugPrint(res)
