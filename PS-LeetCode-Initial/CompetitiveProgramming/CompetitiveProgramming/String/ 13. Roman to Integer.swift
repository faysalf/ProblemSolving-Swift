//
//   13. Roman to Integer.swift
//  CompetitiveProgramming
//
//  Created by Md. Faysal Ahmed on 14/11/23.
//

import Foundation

//class Solution {
//    func romanToInt(_ s: String) -> Int {
//
//        var res: Int = 0
//        let cnt = s.count
//        var str: [Character] = []
//        
//        for char in s {
//            str.append(char)
//        }
//
//        var i = 0
//        while (i<cnt) {
//            if str[i] == "I" {
//                if cnt > i+1 {
//                    if str[i+1] == "V" {
//                        res += 4
//                        i += 1
//
//                    }else if str[i+1] == "X" {
//                        res += 9
//                        i += 1
//
//                    }else {
//                        res += 1
//                    }
//                }else {
//                    res += 1
//                }
//
//            }else if str[i] == "V" {
//                res += 5
//
//            }else if str[i] == "X" {
//                if cnt > i+1 {
//                    if str[i+1] == "L" {
//                        res += 40
//                        i += 1
//
//                    }else if str[i+1] == "C" {
//                        res += 90
//                        i += 1
//
//                    }else {
//                        res += 10
//                    }
//                }else {
//                    res += 10
//                }
//
//            }else if str[i] == "L" {
//                res += 50
//
//            }else if str[i] == "C" {
//                if cnt > i+1 {
//                    if str[i+1] == "D" {
//                        res += 400
//                        i += 1
//
//                    }else if str[i+1] == "M" {
//                        res += 900
//                        i += 1
//
//                    }else {
//                        res += 100
//                    }
//                }else {
//                    res += 100
//                }
//
//            }else if str[i] == "D" {
//                res += 500
//
//            }else if str[i] == "M" {
//                res += 1000
//
//            }
//            i += 1
//        }
//
//
//        return res
//
//
//    }
//}
//
//func main() {
//
//    let checker = Solution()
//
//    let a = checker.romanToInt("LVIII")
//
//    print(a)
//}
//
//main()
