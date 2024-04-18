//
//  easy1779 - GCD of array.swift
//  CompetitiveProgramming
//
//  Created by Md. Faysal Ahmed on 7/4/24.
//

import Foundation

class Solution1779 {
    func findGCD(_ nums: [Int]) -> Int {
        var maxNum = 0, minNum = Int.max
        for num in nums {
            maxNum = max(maxNum, num)
            minNum = min(minNum, num)
        }
        return GCD(num1: maxNum, num2: minNum)
    }
    
    func GCD(num1: Int, num2: Int) -> Int {
        if num2 == 0 {
            return num1
        }
        return GCD(num1: num2, num2: num1%num2)
    }
}
