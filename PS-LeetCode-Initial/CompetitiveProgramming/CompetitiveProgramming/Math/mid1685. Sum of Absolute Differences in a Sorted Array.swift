//
//  mid1685. Sum of Absolute Differences in a Sorted Array.swift
//  CompetitiveProgramming
//
//  Created by Md. Faysal Ahmed on 26/11/23.
//

import Foundation

//class Solution {
//
//    func getSumAbsoluteDifferences(_ nums: [Int]) -> [Int] {
//
//        let cnt = nums.count
//        var arrSum: [Int] = []
//        var res: [Int] = []
//        var lastSum = 0
//
//        for i in stride(from: cnt-1, to: -1, by: -1) {
//            arrSum.insert(lastSum+nums[i], at: 0)
//            lastSum += nums[i]
//        }
//
//        for i in 0..<cnt {
//
//            if i == 0 {
//                res.append(abs(nums[i]*(cnt-i-1) - arrSum[i+1]))
//
//            }else if i == cnt-1 {
//                res.append(abs(nums[i]*i - (arrSum[0]-arrSum[i])))
//
//            } else {
//                res.append(abs(nums[i]*(cnt-i-1) - arrSum[i+1]) + abs(nums[i]*i - (arrSum[0]-arrSum[i])))
//            }
//        }
//
//        return res
//    }
//}
