//
//  easy606. Construct String from Binary Tree.swift
//  CompetitiveProgramming
//
//  Created by Md. Faysal Ahmed on 9/12/23.
//

import Foundation

public class TreeNode606 {
    public var val: Int
    public var left: TreeNode606?
    public var right: TreeNode606?
    public init() { self.val = 0; self.left = nil; self.right = nil; }
    public init(_ val: Int) { self.val = val; self.left = nil; self.right = nil; }
    public init(_ val: Int, _ left: TreeNode606?, _ right: TreeNode606?) {
        self.val = val
        self.left = left
        self.right = right
    }
}

class Solution606 {
    func tree2str(_ root: TreeNode606?) -> String {
        guard let root = root else { return "" }

        let left = tree2str(root.left)
        let right = tree2str(root.right)

        if root.left == nil && root.right == nil {
            return "\(root.val)"
        }
        if root.right == nil {
            return "\(root.val)(\(left))"
        }
        return "\(root.val)(\(left))(\(right))"
    }
}

//let object = Solution606()
//print(object.tree2str(TreeNode606(1, TreeNode606(2, nil, TreeNode606(4)), TreeNode606(3))))
