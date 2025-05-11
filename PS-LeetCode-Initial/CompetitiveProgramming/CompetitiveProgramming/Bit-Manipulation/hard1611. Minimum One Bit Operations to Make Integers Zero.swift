//
//  hard1611. Minimum One Bit Operations to Make Integers Zero.swift
//  CompetitiveProgramming
//
//  Created by Md. Faysal Ahmed on 2/12/23.
//

//import Foundation

//class Solution {
//    func minimumOneBitOperations(_ n: Int) -> Int {
//
//        var res = 0
//        var mask = 1
//
//        while mask <= n {
//            if n & mask != 0 {
//                res = (mask * 2 - 1) - res
//            }
//            mask <<= 1
//        }
//        return res
//    }
//}
