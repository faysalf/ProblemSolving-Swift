//: A UIKit based Playground for presenting user interface

// Definition for singly-linked list.
public class ListNode {
    public var val: Int
    public var next: ListNode?
    public init(_ val: Int) {
        self.val = val
        self.next = nil
    }
}

extension ListNode: Equatable, Hashable {
    public static func == (lhs: ListNode, rhs: ListNode) -> Bool {
        return lhs === rhs
    }
    
    public func hash(into hasher: inout Hasher) {
        hasher.combine(ObjectIdentifier(self)) // Unique per instance
    }
}


class Solution {
    func reverseList(_ head: ListNode?) -> ListNode? {
        var reversedLinkedList: ListNode?
        var currentNode = head
        
        while currentNode != nil {
            let tempNode = currentNode?.next
            currentNode?.next = reversedLinkedList
            reversedLinkedList = currentNode
            currentNode = tempNode
            
        }
        
        return reversedLinkedList
    }
}

