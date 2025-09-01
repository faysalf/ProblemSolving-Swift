//: A UIKit based Playground for presenting user interface
  
class Solution {
    
    func combinationSum2(_ candidates: [Int], _ target: Int) -> [[Int]] {
        var combinations: Set<[Int]> = []
        var sz = candidates.count
        let candidates = candidates.sorted()
        
        func findCombinations(curIdx: Int, target: Int, current: inout [Int]) {
            if target == 0 {
                combinations.insert(current)
                return
            }
            
            for idx in curIdx..<sz {
                if candidates[idx] <= target &&
                    (idx == curIdx || (candidates[idx] != candidates[idx-1])) {
                    
                    current.append(candidates[idx])
                    findCombinations(curIdx: idx+1, target: target-candidates[idx], current: &current)
                    current.removeLast()
                }

            }
            
        }
        
        var current: [Int] = []
        findCombinations(curIdx: 0, target: target, current: &current)
        
        return Array(combinations)
    }
    
}

var obj = Solution()
let res = obj.combinationSum2([10,1,2,7,6,1,5], 8)
debugPrint(res)
