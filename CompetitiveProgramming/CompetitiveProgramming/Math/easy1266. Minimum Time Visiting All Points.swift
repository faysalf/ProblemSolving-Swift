//
//  easy1266. Minimum Time Visiting All Points.swift
//  CompetitiveProgramming
//
//  Created by Md. Faysal Ahmed on 3/12/23.
//

import Foundation

class Solution1266 {
    func minTimeToVisitAllPoints(_ points: [[Int]]) -> Int {
        
        var seconds = 0
        var cnt = points.count
        
        for idx in 1..<cnt{
            seconds += max(abs(points[idx-1][0] - points[idx][0]), abs(points[idx-1][1] - points[idx][1]))
        }
        return seconds
    }
}
