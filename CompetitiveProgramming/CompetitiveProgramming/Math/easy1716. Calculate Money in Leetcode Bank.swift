//
//  easy1716. Calculate Money in Leetcode Bank.swift
//  CompetitiveProgramming
//
//  Created by Md. Faysal Ahmed on 8/12/23.
//

import Foundation

class Solution1716 {
    func totalMoney(_ n: Int) -> Int {

        let numberOfWeeks = Int(n/7)
        let leftDays = n % 7
        var res = 0
        var maxNum = 7

        for i in 0..<numberOfWeeks {
            res += (maxNum * (maxNum+1)) / 2 - (i * (i+1)) / 2
            maxNum += 1
        }

        let leftDaysMaxNum = numberOfWeeks + leftDays
        let leftDaysCount = ((leftDaysMaxNum * (leftDaysMaxNum+1)) / 2) - ((numberOfWeeks * (numberOfWeeks+1)) / 2)

        return res + leftDaysCount
    }
}
