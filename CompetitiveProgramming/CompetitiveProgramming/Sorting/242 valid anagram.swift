//
//  242 valid anagram.swift
//  CompetitiveProgramming
//
//  Created by Md. Faysal Ahmed on 17/12/23.
//

import Foundation

class Solution242 {
    func isAnagram(_ s: String, _ t: String) -> Bool {
        if s.count != t.count {
            return false
        }
        if s.sorted() == t.sorted() {
            return true
        }
        return false
    }
}
