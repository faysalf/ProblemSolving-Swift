//
//  easy2264. Largest 3-Same-Digit Number in String.swift
//  CompetitiveProgramming
//
//  Created by Md. Faysal Ahmed on 5/12/23.
//

import Foundation

class Solution2264 {
    func largestGoodInteger(_ num: String) -> String {
        
        let characters = num.map({ String($0) })
        let cnt = characters.count
        var substrCnt: [String: Int] = ["0":0, "1":0, "2":0, "3":0, "4":0, "5":0, "6":0, "7":0, "8":0, "9":0]

        for idx in 0..<cnt {
            if idx > 0 {
                if characters[idx] == characters[idx-1] {
                    substrCnt[characters[idx]]! += 1
                    
                }else if substrCnt[characters[idx]]! < 3 {
                    substrCnt[characters[idx]] = 1
                    
                }
            }else {
                substrCnt[characters[idx]] = 1
            }
        }

        var key = ""
        for i in stride(from: 9, to: -1, by: -1) {
            key = "\(i)"
            if substrCnt[key]! >= 3 {
                return String(repeating: key, count: 3)
            }
        }
        return ""
        
    }
}
