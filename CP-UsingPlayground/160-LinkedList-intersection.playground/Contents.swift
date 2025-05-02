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
    func getIntersectionNode(_ headA: ListNode?, _ headB: ListNode?) -> ListNode? {
        var currentA: ListNode? = headA
        var currentB: ListNode? = headB
        
        while currentA != currentB {
            currentA = currentA == nil ? headB: currentA?.next
            currentB = currentB == nil ? headA: currentB?.next
        }
        
        return currentA
    }
}

