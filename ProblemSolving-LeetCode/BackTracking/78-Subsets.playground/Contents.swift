class Solution {
    func subsets(_ nums: [Int]) -> [[Int]] {
        var allSubsets: [[Int]] = []
        let sz = nums.count
        
        func findSubset(current: [Int], idx: Int) {
            allSubsets.append(current)
            
            if (idx >= sz) {
                return
            }
            
            for i in idx..<sz {
                findSubset(current: current + [nums[i]], idx: i+1)
            }
            
        }
        findSubset(current: [], idx: 0)
        
        return allSubsets
    }
    
}

let obj = Solution()
debugPrint(obj.subsets([1,2,3]))
