//
//  1630. Arithmetic Subarrays.swift
//  CompetitiveProgramming
//
//  Created by Md. Faysal Ahmed on 23/11/23.
//

//import Foundation
//
//class Solution {
//
//    private func checkArithmeticSubarray(_ nums: [Int], _ l: Int, _ r: Int) -> Bool {
//
//        var subArr = nums[l...r].sorted()
//        let dif = subArr[1] - subArr[0]
//
//        for i in 2..<subArr.count {
//            if dif != subArr[i] - subArr[i-1] {
//                return false
//            }
//        }
//        return true
//
//    }
//
//    func checkArithmeticSubarrays(_ nums: [Int], _ l: [Int], _ r: [Int]) -> [Bool] {
//
//        let res = zip(l, r).map({ (i, j) in
//            checkArithmeticSubarray(nums, i, j)
//        })
//
//        return res
//
//    }
//
//
//}
//
