//
//  easy1115.swift
//  CompetitiveProgramming
//
//  Created by Md. Faysal Ahmed on 31/3/24.
//

import Foundation

class Solution1512 {
    func numIdenticalPairs(_ nums: [Int]) -> Int {
        var duplicatesCnt: [Int: Int] = [:]
        var result = 0
        for num in nums {
            if let eleCount = duplicatesCnt[num] {
                result += (eleCount * (eleCount+1)) / 2
                if eleCount >= 2 {
                    result -= (eleCount * (eleCount-1)) / 2
                }
                duplicatesCnt[num]! += 1
                
            }else {
                duplicatesCnt[num] = 1
            }
        }
        
        return result
    }
}
