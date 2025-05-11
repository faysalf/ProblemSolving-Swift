//
//  Mid-3-Longest Substring Without Repeating Characters.swift
//  CompetitiveProgramming
//
//  Created by Md. Faysal Ahmed on 22/4/24.
//

import Foundation

class Solution3 {
    func lengthOfLongestSubstring(_ s: String) -> Int {
        var maxSubStringLen = 0
        var leftmostIdx = 0
        var lastSeenCharsMap: [Character: Int] = [:]
        
        for (idx, char) in s.enumerated() {
            if let foundPreviouslyAt = lastSeenCharsMap[char],
                foundPreviouslyAt >= leftmostIdx {
                leftmostIdx = foundPreviouslyAt + 1
            }else {
                maxSubStringLen = max(maxSubStringLen, idx - leftmostIdx + 1)
            }
            lastSeenCharsMap[char] = idx
        }
        return maxSubStringLen
    }
}

let obj = Solution()
var arr = [3,3]
print(obj.lengthOfLongestSubstring("dvdf"))
