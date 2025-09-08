class Solution {
    func subsetsWithDup(_ nums: [Int]) -> [[Int]] {
        var allSubsets: Set<[Int]> = []
        let sz = nums.count
        var nums = nums.sorted()
        
        func findSubset(current: [Int], idx: Int) {
            allSubsets.insert(current)
            
            if (idx >= sz) {
                return
            }
            
            for i in idx..<sz {
                findSubset(current: current + [nums[i]], idx: i+1)
            }
            
        }
        findSubset(current: [], idx: 0)
        
        return Array(allSubsets)
    }
    
}

let obj = Solution()
debugPrint(obj.subsetsWithDup([4,4,4,1,4]))

