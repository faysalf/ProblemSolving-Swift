

// Definition for singly-linked list.
public class ListNode {
    public var val: Int
    public var next: ListNode?
    public init() { self.val = 0; self.next = nil; }
    public init(_ val: Int) { self.val = val; self.next = nil; }
    public init(_ val: Int, _ next: ListNode?) { self.val = val; self.next = next; }
}

class Solution {
    func deleteDuplicates(_ head: ListNode?) -> ListNode? {
        var uniqueList: ListNode? = head
        var lastAppendNode: ListNode? = head
        
        while (lastAppendNode?.next != nil) {
            if lastAppendNode?.val != lastAppendNode?.next?.val {
                lastAppendNode = lastAppendNode?.next
            }else {
                lastAppendNode?.next = lastAppendNode?.next?.next
            }
        }
        
        return uniqueList
    }
}


var solution = Solution()
let list1 = ListNode(1, ListNode(1, ListNode(2, ListNode(3, ListNode(3)))))
let list2 = ListNode(1, ListNode(3, ListNode(4)))
var res = solution.deleteDuplicates(list1)

while (res != nil) {
    print(res!.val)
    res = res?.next
}
