//
//  mid1727. Largest Submatrix With Rearrangements.swift
//  CompetitiveProgramming
//
//  Created by Md. Faysal Ahmed on 27/11/23.
//

import Foundation

class Solution1727 {
    
    func largestSubmatrix(_ matrix: [[Int]]) -> Int {
        var maxArea = 0
        var histogram = Array(repeating: 0, count: matrix[0].count)
        
        for row in matrix {
            for i in 0..<row.count {
                histogram[i] = row[i] == 0 ? 0 : histogram[i] + 1
            }
            
            let sortedHistogram = histogram.sorted()
            
            for i in 0..<sortedHistogram.count {
                let height = sortedHistogram[i]
                let width = row.count - i   // history shorted korle, 1st element ta rest of the row element e thakbe. 2nd element tar poroborti element gulo te thakbe must. so we find width = row.count-i. And every column index er jonyo consecutive 1 count kore rekhe diyechhi as height
                let area = height * width
                maxArea = max(maxArea, area)
                print(row.count - i, " ", area)
                print(sortedHistogram)
            }
        }
        
        return maxArea
    }
}

