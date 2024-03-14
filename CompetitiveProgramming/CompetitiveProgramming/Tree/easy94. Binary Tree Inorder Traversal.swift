//
//  easy94. Binary Tree Inorder Traversal.swift
//  CompetitiveProgramming
//
//  Created by Md. Faysal Ahmed on 10/12/23.
//


  public class TreeNode {
      public var val: Int
      public var left: TreeNode?
      public var right: TreeNode?
      public init() { self.val = 0; self.left = nil; self.right = nil; }
      public init(_ val: Int) { self.val = val; self.left = nil; self.right = nil; }
      public init(_ val: Int, _ left: TreeNode?, _ right: TreeNode?) {
          self.val = val
          self.left = left
          self.right = right
      }
  }
 
class Solution94 {
    func inorderTraversal(_ root: TreeNode?) -> [Int] {
        var value: [Int] = []
        
        if root?.val == nil {
            return value

        }else {
            value.append(contentsOf: inorderTraversal(root?.left)) // Left node
            value.append(root?.val ?? 0) // Root node
            value.append(contentsOf: inorderTraversal(root?.right)) // Right node
            return value
        }
    }
}
