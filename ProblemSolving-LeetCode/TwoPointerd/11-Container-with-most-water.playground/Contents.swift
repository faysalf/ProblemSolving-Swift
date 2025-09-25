class Solution {
    func maxArea(_ height: [Int]) -> Int {
        var left = 0
        var right = height.count - 1
        var maxContainer = 0
        
        while (left < right) {
            maxContainer = max(maxContainer, (right - left) * min(height[right], height[left]))
            
            if (height[left] < height[right]) {
                left += 1
            }else {
                right -= 1
            }
            
        }
        
        return maxContainer
    }
    
}

let obj = Solution()
let res = obj.maxArea([1,8,6,2,5,4,8,3,7])
let res2 = obj.maxArea([1,1])
debugPrint(res2)
