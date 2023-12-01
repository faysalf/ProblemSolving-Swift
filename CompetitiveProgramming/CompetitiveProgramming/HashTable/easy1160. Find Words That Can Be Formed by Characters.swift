//
//  easy1160. Find Words That Can Be Formed by Characters.swift
//  CompetitiveProgramming
//
//  Created by Md. Faysal Ahmed on 2/12/23.
//

import Foundation

//class Solution {
//    func countCharacters(_ words: [String], _ chars: String) -> Int {
//        
//        var charCnt: [Character: Int] = [:]
//        var totalCount = 0
//
//        chars.forEach({ char in
//            charCnt[char, default: 0] += 1
//        })
//        
//        for word in words {
//            var validWord = true
//            var formedStrDic: [Character: Int] = [:]
//            for char in word {
//                formedStrDic[char, default: 0] += 1
//            }
//            for (char, cnt) in formedStrDic {
//                if let charCount = charCnt[char], cnt <= charCount {
//                    continue
//                }else {
//                    validWord = false
//                    break
//                }
//            }
//            if validWord {
//                totalCount += word.count
//            }
//        }
//        return totalCount
//    }
//}
