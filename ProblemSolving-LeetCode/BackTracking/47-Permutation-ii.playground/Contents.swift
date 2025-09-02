
class Solution {
    func permuteUnique(_ nums: [Int]) -> [[Int]] {
        var permutations: Set<[Int]> = []
        var sz = nums.count
        var nums = nums.sorted()
        var usedNums = Array(repeating: false, count: nums.count)

        func permutation(_ current: inout [Int], cnt: Int, index: Int) {
            if cnt == sz {
                permutations.insert(current)
                return
            }
            
            for idx in 0..<sz {
                if usedNums[idx] { continue }
                if (idx > 0 && nums[idx] == nums[idx-1] && !usedNums[idx-1]) {
                    continue
                }
                current.append(nums[idx])
                usedNums[idx] = true
                permutation(&current, cnt: cnt+1, index: idx+1)
                usedNums[idx] = false
                current.removeLast()
            }
            
        }
        var currentNums: [Int] = [];
        permutation(&currentNums, cnt: 0, index: 0)
        
        return Array(permutations)
    }
    
}

var solution = Solution()
debugPrint(solution.permuteUnique([1,1,2]))
