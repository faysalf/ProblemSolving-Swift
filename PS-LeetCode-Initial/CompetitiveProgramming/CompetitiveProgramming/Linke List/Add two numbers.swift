//
//  main.swift
//  CompetitiveProgramming
//
//  Created by Md. Faysal Ahmed on 30/10/23.
//

//import Foundation
//
//class Solution {
//    func addTwoNumbers(_ l1: [Int]?, _ l2: [Int]?) -> [Int]? {
//        guard let l1 = l1, let l2 = l2 else { return [] }
//        var n1 = 0, n2 = 0;
//        
//        for i in stride(from: l1.count - 1, to: -1, by: -1) {
//            n1 = n1 * 10 + Int(l1[i])
//        }
//        
//        for i in stride(from: l2.count - 1, to: -1, by: -1) {
//            n2 = n2 * 10 + Int(l2[i])
//        }
//        
//        var res: [Int] = []; var sm = n1+n2
//        while (sm > 0) {
//            res.append(sm%10)
//            sm /= 10
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
//    let a = checker.addTwoNumbers([2,4,3], [5,6,4])
//    
//    print(a)
//}
//
//main()
