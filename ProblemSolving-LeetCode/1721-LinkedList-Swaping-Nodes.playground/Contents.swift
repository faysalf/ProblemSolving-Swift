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
    func swapNodes(_ head: ListNode?, _ k: Int) -> ListNode? {
        var size = 0
        var current = head
        
        while (current != nil) {
            size += 1
            current = current?.next
        }
        
        var lastIdx = size - k
        var firstKthNode: ListNode?
        var fromLastKthNode: ListNode?
        
        var curIndex = 0
        current = head
        
        while (current != nil) {
            if curIndex == k - 1 {
                firstKthNode = current
            }
            if curIndex == lastIdx {
                fromLastKthNode = current
            }
            curIndex += 1
            current = current?.next
        }
        
        let tempVal = firstKthNode?.val
        firstKthNode?.val = fromLastKthNode!.val
        fromLastKthNode?.val = tempVal!
        
        return head
        
    }
}

let sol = Solution()
var res = sol.swapNodes(ListNode(1, ListNode(2, ListNode(3, ListNode(4, ListNode(5))))), 2)

while res != nil {
    print(res?.val)
    res = res?.next
}
