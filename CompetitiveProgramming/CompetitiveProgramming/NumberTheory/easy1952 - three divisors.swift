//
//  easy1952 - three divisors.swift
//  CompetitiveProgramming
//
//  Created by Md. Faysal Ahmed on 8/4/24.
//

import Foundation

class Solution1952 {
    func isThree(_ n: Int) -> Bool {
        return hasExactlyThreeDivisors(num: n)
    }
    
    func hasExactlyThreeDivisors(num: Int) -> Bool {
        var i = 2
        var hasDivisor = false
        
        while i*i <= num {
            if num % i == 0 {
                if i != num/i {
                    return false
                }
                hasDivisor = true
            }
            i += 1
        }
        return hasDivisor
    }
    
}
