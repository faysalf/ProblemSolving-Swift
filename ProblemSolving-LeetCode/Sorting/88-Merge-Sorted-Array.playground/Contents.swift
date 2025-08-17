
class Solution {
    func merge(_ nums1: inout [Int], _ m: Int, _ nums2: [Int], _ n: Int) {
        var i = 0, j = 0;
        var merged = [Int]()
        
        for idx in 0..<(m+n) {
            if i < m && j >= n {
                merged.append(contentsOf: nums1[i..<m])
                break
            }
            else if j < n && i >= m {
                merged.append(contentsOf: nums2[j..<n])
                break
            }
            if nums1[i] <= nums2[j] {
                merged.append(nums1[i])
                i += 1
            }
            else {
                merged.append(nums2[j])
                j += 1
            }
        }
        nums1 = merged
        
    }
}

let obj = Solution()
var arr = [1,1,3,5]
let arr2 = [2,3,4]
obj.merge(&arr, arr.count, arr2, arr2.count)
debugPrint(arr)
