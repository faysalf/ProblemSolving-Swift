//
//  1071 easy GCD of String.swift
//  CompetitiveProgramming
//
//  Created by Md. Faysal Ahmed on 7/4/24.
//

import Foundation

class Solution1071 {
    func gcdOfStrings(_ str1: String, _ str2: String) -> String {
        
        if str1+str2 != str2+str1 {
            return ""
        }
        
        let len1 = str1.count
        let len2 = str2.count
        
        let gcdLen = GCD(num1: len1, num2: len2)
        let gcdStr = String(str1.prefix(gcdLen))
        
        if str1 == String(repeating: gcdStr, count: len1/gcdLen) &&
            str2 == String(repeating: gcdStr, count: len2/gcdLen) {
            return gcdStr
        }
        return ""
        
    }
    
    func GCD(num1: Int, num2: Int) -> Int {
        if num2 == 0 {
            return num1
        }
        return GCD(num1: num2, num2: num1%num2)
    }
}
