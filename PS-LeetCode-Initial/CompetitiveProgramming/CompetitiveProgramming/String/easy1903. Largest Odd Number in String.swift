//
//  easy1903. Largest Odd Number in String.swift
//  CompetitiveProgramming
//
//  Created by Md. Faysal Ahmed on 8/12/23.
//

import Foundation

class Solution1903 {
    func largestOddNumber(_ num: String) -> String {
        var flag: Bool = false
        let chars = num.map({ $0 })
        var largestOddSubString = ""
        
        for i in stride(from: chars.count-1, to: -1, by: -1) {
            if flag {
                largestOddSubString = String(chars[i]) + largestOddSubString
                
            }else if chars[i] == "1" || chars[i] == "3" || chars[i] == "5" || chars[i] == "7" || chars[i] == "9" {
                flag = true
                largestOddSubString = String(chars[i])
            }
        }
        return largestOddSubString
    }
}

