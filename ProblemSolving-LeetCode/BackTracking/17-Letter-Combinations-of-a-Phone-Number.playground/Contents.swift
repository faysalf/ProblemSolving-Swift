

class Solution {
    
    func retrieveGigits(_ digits: String) -> [Int] {
        var nums = Int(digits)!
        var digits: [Int] = []
        
        while (nums > 0) {
            digits.insert(nums % 10, at: 0)
            nums /= 10
        }
        
        return digits
    }
    
    func letterCombinations(_ digits: String) -> [String] {
        guard digits != "" else { return [] }
        
        let digitArr = retrieveGigits(digits)
        let digitMap: [Int: String] = [
            2: "abc",
            3: "def",
            4: "ghi",
            5: "jkl",
            6: "mno",
            7: "pqrs",
            8: "tuv",
            9: "wxyz",
        ]
        var combinations: [String] = []
        var combSize = digits.count
        
        func findCombinations(_ idx: Int, currentComb: String) {
            if idx == combSize {
                combinations.append(currentComb)
                return
            }
            
            var characters = digitMap[digitArr[idx]]!.map { $0 }
            for char in characters {
                findCombinations(idx+1, currentComb: currentComb + String(char))
            }
            
        }
        findCombinations(0, currentComb: "")
        
        return combinations
    }
    
}

let obj = Solution()
let res = obj.letterCombinations("23")
debugPrint(res)
