//
//  Mid50-Pow(x,n).swift
//  CompetitiveProgramming
//
//  Created by Md. Faysal Ahmed on 19/3/24.
//

import Foundation

class Solution50 {
    func myPow(_ x: Double, _ n: Int) -> Double {
        
        var ans = 1.0, n = n, x = x
        if n < 0 {
            x = 1/x
            n = abs(n)
        }
        
        while (n > 0) {
            if (n%2 == 1) {
                ans *= x
            }
            x *= x
            n /= 2
        }
        
        return ans
    }
}
