// Definition for singly-linked list.
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
    func removeElements(_ head: ListNode?, _ val: Int) -> ListNode? {
        
        var newHead = head
        var beforeCurrentNode = head
        var currentNode = head?.next
        
        while currentNode != nil {
            if currentNode?.val == val {
                beforeCurrentNode?.next = currentNode?.next
            }else {
                beforeCurrentNode = currentNode?.next != nil ? currentNode: beforeCurrentNode
            }
            currentNode = currentNode?.next
        }
        
        while newHead?.val == val {
            newHead = newHead?.next
        }
        
        return newHead
    }
}

var solution = Solution()
//var ll = solution.removeElements(ListNode(1, ListNode(2, ListNode(2, ListNode(1)))), 2)
//var ll = solution.removeElements(ListNode(7, ListNode(7, ListNode(7, ListNode(7)))), 7)
var ll = solution.removeElements(ListNode(1, ListNode(2, ListNode(6, ListNode(3, ListNode(4, ListNode(5, ListNode(6))))))), 6)
while ll != nil {
    print(ll?.val)
    ll = ll?.next
}
print(ll)
