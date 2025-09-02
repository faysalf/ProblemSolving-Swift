
class Solution {
    func permute(_ nums: [Int]) -> [[Int]] {
        var permutations: [[Int]] = []
        var sz = nums.count
        
        func permutation(_ current: inout [Int], cnt: Int, index: Int) {
            if cnt == sz {
                permutations.append(current)
                return
            }
            
            for idx in 0..<sz {
                if !(current.contains(nums[idx])) {
                    current.append(nums[idx])
                    permutation(&current, cnt: cnt+1, index: idx+1)
                    current.removeLast()
                }
                
            }
            
        }
        var currentNums: [Int] = [];
        permutation(&currentNums, cnt: 0, index: 0)
        
        return permutations
    }
    
}

var solution = Solution()
debugPrint(solution.permute([1,2,3]))
