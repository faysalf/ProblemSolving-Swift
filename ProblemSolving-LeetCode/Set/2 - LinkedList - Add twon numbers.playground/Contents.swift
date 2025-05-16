
public class ListNode {
    public var val: Int
    public var next: ListNode?
    public init() { self.val = 0; self.next = nil; }
    public init(_ val: Int) { self.val = val; self.next = nil; }
    public init(_ val: Int, _ next: ListNode?) { self.val = val; self.next = next; }
}


class Solution {
    func addTwoNumbers(_ l1: ListNode?, _ l2: ListNode?) -> ListNode? {
        
        var sum = ListNode(0)
        var current = sum
        var carry = 0
        var currL1 = l1
        var currL2 = l2
        
        while (currL1 != nil && currL2 != nil) {
            current.next = ListNode((currL1!.val + currL2!.val + carry) % 10)
            carry = (currL1!.val + currL2!.val + carry) / 10
            currL1 = currL1?.next
            currL2 = currL2?.next
            current = current.next!
        }
        
        while (currL1 != nil) {
            current.next = ListNode((currL1!.val + carry) % 10)
            carry = (currL1!.val + carry) / 10
            currL1 = currL1?.next
            current = current.next!
        }
        
        while (currL2 != nil) {
            current.next = ListNode((currL2!.val + carry) % 10)
            carry = (currL2!.val + carry) / 10
            currL2 = currL2?.next
            current = current.next!        }
        
        if carry > 0 {
            current.next = ListNode(carry)
        }
        
        return sum.next
    }
}

var obj = Solution()
let l1 = ListNode(2, ListNode(4, ListNode(3)))
let l2 = ListNode(5, ListNode(6, ListNode(4)))
var res = obj.addTwoNumbers(l1, l2)

while res != nil {
    print(res!.val)
    res = res?.next
}
