//
//  medium1609- even-odd tree.swift
//  CompetitiveProgramming
//
//  Created by Md. Faysal Ahmed on 1/3/24.
//

import Foundation

class Solution1609 {
    func isEvenOddTree(_ root: TreeNode?) -> Bool {
        guard let root = root else { return true }
        var queue: [TreeNode] = [root]
        var level = 0

        while !queue.isEmpty {
            var prevVal: Int?
            let count = queue.count

            for i in 0..<count {
                let node = queue.removeFirst()

                if (level % 2 == 0 && (node.val % 2 == 0 || (prevVal != nil && node.val <= prevVal!))) ||
                    (level % 2 != 0 && (node.val % 2 != 0 || (prevVal != nil && node.val >= prevVal!))) {
                    return false
                }
                prevVal = node.val

                if let left = node.left { queue.append(left) }
                if let right = node.right { queue.append(right) }
            }
            level += 1
        }

        return true
    }

}

