//class Solution {
//    func searchInsert(_ nums: [Int], _ target: Int) -> Int {
//        var idx = 0
//        var left = 0
//        var right = nums.count - 1
//        
//        while left <= right {
//            let mid = (left + right) / 2
//            if nums[mid] == target {
//                return mid
//            } else if nums[mid] < target {
//                left = mid + 1
//            } else {
//                right = mid - 1
//            }
//        }
//        
//        return left
//    }
//}

class Solution {
    func searchInsert(_ nums: [Int], _ target: Int) -> Int {
        func dfs( _ left: Int, _ right: Int) -> Int {
            if left > right {
                return left
            }
            
            let mid = (left + right) / 2
            if nums[mid] == target {
                return mid
                
            } else if nums[mid] < target {
                return dfs(mid+1, right)
                
            } else {
                return dfs(left, mid-1)
            }
            
        }
        
        return dfs(0, nums.count-1)
    }
}


let obj = Solution()
let res = obj.searchInsert([1, 3, 5, 6, 9], 7)
debugPrint(res)
