import Foundation

class Solution {
    func countMaxOrSubsets(_ nums: [Int]) -> Int {
        var maxOr = 0
        for n in nums {
            maxOr |= n
        }
        
        var count = 0
        let sz = nums.count
        
        func dfs(idx: Int, currentOr: Int) {
            if idx == sz {
                if currentOr == maxOr {
                    count += 1
                }
                return
            }
            dfs(idx: idx+1, currentOr: currentOr | nums[idx]) // included current value
            dfs(idx: idx+1, currentOr: currentOr)             // excluded current value
        }
        
        dfs(idx: 0, currentOr: 0)
        
        return count
    }
    
}


let obj = Solution()
let res = obj.countMaxOrSubsets([3,1])
debugPrint(res)

//  011 = 3
//  010 = 2
//  001 = 1
//  101 = 5



//class Solution {
//    func countMaxOrSubsets(_ nums: [Int]) -> Int {
//        var orSubsetNums: [Int: Int] = [:]
//        let sz = nums.count
//
//        for i in 0..<sz {
//            var temp = nums[i]
//            orSubsetNums[nums[i], default: 0] += 1
//
//            for j in i+1..<sz {
//                temp |= nums[j]
//                orSubsetNums[temp, default: 0] += 1
//                debugPrint("i-\(i), j-\(j), bit-or result \(temp), count \(orSubsetNums[temp]!)")
//            }
//        }
//
//        var maxOr = 0
//        var maxOrCount = 0
//        for (orResult, count) in orSubsetNums {
//            if orResult > maxOr {
//                maxOrCount = count
//            }
//            //debugPrint("bit-or (result, count) - ", orResult, count)
//        }
//
//        return maxOrCount
//    }
//
//}
