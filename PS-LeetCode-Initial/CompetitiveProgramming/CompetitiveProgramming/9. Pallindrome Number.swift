////
////  main.swift
////  CompetitiveProgramming
////
////  Created by Md. Faysal Ahmed on 30/10/23.
////
//
//import Foundation
//
//class Solution {
//    
//    func isPalindrome(_ x: Int) -> Bool {
//        
//        let str = String(x)
//        var rev = ""
//        
//        for char in str {
//            rev = String(char) + rev
//        }
//        
//        if (rev == str) {
//            return true
//            
//        }else {
//            return false
//        }
//
//    }
//}
//
//func main() {
//    
//    let checker = Solution()
//    
//    if let x = readLine() {
//        print(checker.isPalindrome(Int(x)!))
//        
//    } else {
//        print("No input provided.")
//    }
//}
//
//main()
