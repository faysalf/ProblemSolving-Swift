//
//  Med12 - Int to Roman.swift
//  CompetitiveProgramming
//
//  Created by Md. Faysal Ahmed on 11/3/24.
//

import Foundation

class Solution12 {
    func intToRoman(_ num: Int) -> String {
        let ones = ["", "I","II","III","IV","V","VI","VII","VIII","IX"]
        let tens = ["", "X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC"]
        let hundreds = ["", "C", "CC", "CCC", "CD", "D", "DC", "DCC", "DCCC", "CM"]
        let thousands = ["", "M", "MM", "MMM"]
        
        var numb = num
        var answer = ""
        answer += thousands[Int(numb / 1000)]
        numb %= 1000
        
        answer += hundreds[Int(numb / 100)]
        numb %= 100
        
        answer += tens[Int(numb / 10)]
        numb %= 10
        
        answer += ones[Int(numb)]
        
        return answer
    }
}
