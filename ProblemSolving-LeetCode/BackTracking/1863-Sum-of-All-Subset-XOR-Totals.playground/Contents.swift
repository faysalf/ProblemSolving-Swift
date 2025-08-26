import UIKit

class Solution {
    func dfs(_ nums: [Int], sz: Int, idx: Int, currentXor: Int, xorTotals: inout Int) {
        if (sz == idx) {
            xorTotals += currentXor
            return
        }
        
        dfs(nums, sz: sz, idx: idx+1, currentXor: currentXor ^ nums[idx], xorTotals: &xorTotals) // with
        dfs(nums, sz: sz, idx: idx+1, currentXor: currentXor, xorTotals: &xorTotals)    // without
        
    }
    
    func subsetXORSum(_ nums: [Int]) -> Int {
        var sum = 0

        dfs(nums, sz: nums.count, idx: 0, currentXor: 0, xorTotals: &sum)
        
        return sum
    }
    
}

let obj = Solution()
let res = obj.subsetXORSum([3,4,5,6,7,8])
debugPrint(res)
