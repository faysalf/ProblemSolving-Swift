//
//  1769-Mid-Minimum move to move balls to all the boxes.swift
//  CompetitiveProgramming
//
//  Created by Md. Faysal Ahmed on 9/5/24.
//

import Foundation

class Solution1769 {
    func minOperations(_ boxes: String) -> [Int] {
        var cnt = boxes.count
        let characters = Array(boxes)
        var ans = Array(repeating: 0, count: cnt)
        
        for i in 0..<cnt {
            if characters[i] != "0" {
                for j in 0..<cnt {
                    if i != j {
                        ans[j] += abs(j-i)
                    }
                }
            }
        }
        
        return ans
    }
}
