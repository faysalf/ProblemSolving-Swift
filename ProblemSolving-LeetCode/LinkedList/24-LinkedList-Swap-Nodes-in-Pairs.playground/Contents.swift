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
    func swapPairs(_ head: ListNode?) -> ListNode? {
        let newHead: ListNode? = ListNode(0, head)
        var current = newHead
        
        while current?.next?.next != nil {
            let first = current?.next
            let seconde = current?.next?.next
            
            first?.next = seconde?.next
            seconde?.next = first
            current?.next = seconde
            
            current = current?.next?.next
            
        }
        
        return newHead?.next
    }
}

let sol = Solution()
var res = sol.swapPairs(ListNode(1, ListNode(2, ListNode(3, ListNode(4)))))

while res != nil {
    print(res?.val)
    
    res = res?.next
}

print("Result ends")
