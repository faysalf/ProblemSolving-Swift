//
//  Mid48_Rotate_Image.swift
//  CompetitiveProgramming
//
//  Created by Md. Faysal Ahmed on 14/3/24.
//

import Foundation

class Solution48 {
    func rotate(_ matrix: inout [[Int]]) {
        let len = matrix.count
        
        // Transpose every element between (matrix[row][col], matrix[col][row])
        for row in 0..<len {
            for col in row..<len {
                let temp = matrix[row][col]
                matrix[row][col] = matrix[col][row]
                matrix[col][row] = temp
            }
        }
        // And reverse columns
        for i in 0..<len {
            matrix[i].reverse()
        }
        
    }
}
