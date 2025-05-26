
public class ListNode {
    public var val: Int
    public var next: ListNode?
    public init() { self.val = 0; self.next = nil; }
    public init(_ val: Int) { self.val = val; self.next = nil; }
    public init(_ val: Int, _ next: ListNode?) { self.val = val; self.next = next; }
}
 
class Solution {
    func getDecimalValue(_ head: ListNode?) -> Int {
        var result = 0
        var currentNode = head
        
        while currentNode != nil {
            result = (result*2) + currentNode!.val
            currentNode = currentNode?.next
        }
        
        return result
    }
}

//let obj = Solution()
//let head = ListNode(1, ListNode(1, ListNode(0, ListNode(1))))
//print(obj.getDecimalValue(head))
