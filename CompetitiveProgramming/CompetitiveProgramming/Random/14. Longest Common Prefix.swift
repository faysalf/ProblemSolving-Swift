//
//  14. Longest Common Prefix.swift
//  CompetitiveProgramming
//
//  Created by Md. Faysal Ahmed on 22/11/23.
//

import Foundation

//class Solution {
//
//    func longestCommonPrefix(_ strs: [String]) -> String {
//
//        guard !strs.isEmpty, !strs[0].isEmpty else { return "" }
//        let strs = strs.map { Array($0) }
//
//        let firstStr = strs[0]
//        let cnt = firstStr.count
//        var res = Int.max
//
//        for i in 1..<strs.count {
//            var mxPre = 0
//
//            for j in 0..<strs[i].count {
//
//                if (j < cnt && firstStr[j] == strs[i][j]) {
//                    mxPre += 1
//
//                } else {
//                    break
//                }
//            }
//
//            res = min(res, mxPre)
//
//            if res == 0 { break }
//
//        }
//
//        return res == 0 ? "": String(firstStr.prefix(res))
//
//    }
//
//}
//
//
//let obj = Solution()
//print(obj.longestCommonPrefix(["flower","flow","flight"]))
