//: A UIKit based Playground for presenting user interface
  
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
    func isPalindrome(_ head: ListNode?) -> Bool {
        var slow = head
        var fast = head
        
        while fast?.next?.next != nil {
            slow = slow?.next
            fast = fast?.next?.next
        }
        
        var reversedSecondHalf: ListNode?
        var currentNode = slow
        
        while currentNode != nil {
            let tempNode = currentNode?.next
            currentNode?.next = reversedSecondHalf  //in first access curr.next = nil. head gets 1st to mid (called first half)
            reversedSecondHalf = currentNode
            currentNode = tempNode
        }
        
//        var r = ""
//        while reversedSecondHalf != nil {
//            r = r + "-> \(reversedSecondHalf!.val)"
//            reversedSecondHalf = reversedSecondHalf?.next
//        }
//        print(r)
        
        var firstHalf = head
        while reversedSecondHalf != nil && firstHalf != nil {
            if reversedSecondHalf?.val != firstHalf?.val {
                return false
            }
            reversedSecondHalf = reversedSecondHalf?.next
            firstHalf = firstHalf?.next
        }
        
        return true
    }
}


let obj = Solution()
let head = ListNode(4, ListNode(2, ListNode(3, ListNode(3, ListNode(2, ListNode(4))))))
print(obj.isPalindrome(head))
