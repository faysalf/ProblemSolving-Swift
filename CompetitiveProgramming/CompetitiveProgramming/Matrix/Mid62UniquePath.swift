//
//  Mid62UniquePath.swift
//  CompetitiveProgramming
//
//  Created by Md. Faysal Ahmed on 17/3/24.
//

import Foundation

class Solution62 {
    func uniquePaths(_ m: Int, _ n: Int) -> Int {
        var matrix: [[Int]] = Array(repeating: Array(repeating: 1, count: n) , count: m)
        
        for row in 1..<m {
            for col in 1..<n {
                matrix[row][col] = matrix[row-1][col] + matrix[row][col-1]
            }
        }
        
        return matrix.last?.last ?? 0
        
    }
}
