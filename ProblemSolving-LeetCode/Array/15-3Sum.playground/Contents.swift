class Solution {
    func threeSum(_ nums: [Int]) -> [[Int]] {
        //let nums = nums.sorted()
        var res: Set<[Int]> = []
        var numCount: [Int: Int] = [:]
        
        for num in nums {
            numCount[num, default: 0] += 1
        }
        
        var sz = nums.count
        for i in 0..<sz {
            for j in i+1..<sz {
                var sum = -1 * (nums[i] + nums[j])
                
                if (nums[i] == nums[j] && nums[i] == sum) {
                    if numCount[sum]! >= 3 {
                        debugPrint("num count \(numCount[sum])")
                        res.insert([sum, sum, sum])
                    }
                }
                else if sum == nums[i] {
                    if numCount[sum]! > 1 {
                        debugPrint("O \(sum) is \(numCount[sum]!) times. \([sum, nums[j], sum].sorted())")
                        res.insert([sum, nums[j], sum].sorted())
                    }
                }
                else if sum == nums[j] {
                    if numCount[sum]! > 1 {
                        debugPrint("t \(sum) is \(numCount[sum]!) times. \([nums[i], sum, sum].sorted())")
                        res.insert([nums[i], sum, sum].sorted())
                    }
                }
                else if numCount[sum] != nil {
                    res.insert([nums[i], nums[j], sum].sorted())
                }
            }
        }
        
        return Array(res)
        
    }
    
}

let obj = Solution()
let res = obj.threeSum([0,0,0])
debugPrint(res)
