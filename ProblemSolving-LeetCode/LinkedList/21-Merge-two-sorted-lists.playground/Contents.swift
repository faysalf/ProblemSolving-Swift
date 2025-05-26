
//Definition for singly-linked list.

public class ListNode {
    public var val: Int
    public var next: ListNode?
    public init() { self.val = 0; self.next = nil; }
    public init(_ val: Int) { self.val = val; self.next = nil; }
    public init(_ val: Int, _ next: ListNode?) { self.val = val; self.next = next; }
}

class Solution {
    func mergeTwoLists(_ list1: ListNode?, _ list2: ListNode?) -> ListNode? {
        
        var mergedList: ListNode?
        var currList1: ListNode? = list1
        var currList2: ListNode? = list2
        var lastAppendNode: ListNode? = mergedList
        
        guard currList1 != nil, currList2 != nil else {
            if currList1 != nil {
                return currList1
            }else {
                return currList2
            }
        }
        
        while (currList1 != nil && currList2 != nil) {
            if (currList1!.val <= currList2!.val) {
                if let mergedList {
                    lastAppendNode?.next = currList1
                    lastAppendNode = lastAppendNode?.next
                }else {
                    mergedList = currList1
                    lastAppendNode = currList1
                }
                currList1 = currList1?.next
                
            }else {
                if let mergedList {
                    lastAppendNode?.next = currList2
                    lastAppendNode = lastAppendNode?.next
                }else {
                    mergedList = currList2
                    lastAppendNode = currList2
                }
                currList2 = currList2?.next
            }
        }
        
        if let currList1 {
            lastAppendNode?.next = currList1
        }else if let currList2 {
            lastAppendNode?.next = currList2
        }
        
        return mergedList
    }
    
}


var solution = Solution()
let list1 = ListNode(1, ListNode(2, ListNode(4)))
let list2 = ListNode(1, ListNode(3, ListNode(4)))
var res = solution.mergeTwoLists(list1, list2)

while (res != nil) {
    print(res!.val)
    res = res?.next
}
