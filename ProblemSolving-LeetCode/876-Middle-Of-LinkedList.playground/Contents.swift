public class ListNode {
    public var val: Int
    public var next: ListNode?
    public init() { self.val = 0; self.next = nil; }
    public init(_ val: Int) { self.val = val; self.next = nil; }
    public init(_ val: Int, _ next: ListNode?) { self.val = val; self.next = next; }
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
    func middleNode(_ head: ListNode?) -> ListNode? {
        var slow = head
        var fast = head
        
        while (fast?.next != nil) {
            slow = slow?.next
            fast = fast?.next?.next
        }
        
        return slow
    }
}

