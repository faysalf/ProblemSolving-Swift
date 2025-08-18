import Foundation

class Solution {
    func countMaxOrSubsets(_ nums: [Int]) -> Int {
        var orSubsetNums: [Int: Int] = [:]
        let sz = nums.count
        
        if nums.first == nums.last {
            return Int(pow(2, Double(sz))) - 1
        }
        
        for i in 0..<sz {
            var temp = nums[i]
            
            for j in 0..<sz {
                if i != j {
                    temp |= nums[j]
                    orSubsetNums[temp, default: 0] += 1
                }
            }
        }
        var maxOr = 0
        var maxOrCount = 0
        for (orResult, count) in orSubsetNums {
            if orResult > maxOr {
                maxOrCount = count
            }
            debugPrint("or rsult : count", orResult, count)
        }
        
        return maxOrCount
    }
}

let obj = Solution()
let res = obj.countMaxOrSubsets([1,1,2])
debugPrint(res)

//  011 = 3
//  010 = 2
//  001 = 1
//  101 = 5

