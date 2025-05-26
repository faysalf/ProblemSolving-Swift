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
        hasher.combine(ObjectIdentifier(self))
    }
}

class Solution {
    func removeNthFromEnd(_ head: ListNode?, _ n: Int) -> ListNode? {
        
        var size = 0
        var current = head
        
        while current != nil {
            size += 1
            current = current?.next
        }
        
        if size == n {
            return head?.next
        }
        
        current = head
        while size > n {
            if size-1 == n {
                current?.next = current?.next?.next
            }
            size -= 1
            current = current?.next
        }
        
        return head
    }
}

let sol = Solution()
var res = sol.removeNthFromEnd(ListNode(1), 1) //sol.removeNthFromEnd(ListNode(1, ListNode(2, ListNode(3, ListNode(4, ListNode(5))))), 2)

while res != nil {
    print(res!.val)
    res = res?.next
}

print("End Result ---- ")
