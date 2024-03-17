//
//  22. Generate parentheses.swift
//  CompetitiveProgramming
//
//  Created by Md. Faysal Ahmed on 10/2/24.
//

import Foundation

class GenerateParentheses {
    func generateParenthesis(_ n: Int) -> [String] {
        guard n > 0 else { return [] }
        guard n > 1 else { return ["()"] }
        var res = [String]()

        func dfs(_ left: Int, _ right: Int, _ s: String) {
            if right == n {
                res.append(s)
                return
            }
            if left < n {
                dfs(left + 1, right, s + "(")
            }
            if right < left {
                dfs(left, right + 1, s + ")")
            }
        }

        dfs(1, 0, "(")
        return res
    }
}
