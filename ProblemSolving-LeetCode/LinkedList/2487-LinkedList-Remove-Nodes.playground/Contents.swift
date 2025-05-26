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
    func reverse(headNode: ListNode?) -> ListNode? {
        var prevNode: ListNode?
        var curNode = headNode
        
        while curNode != nil {
            let storeNext = curNode?.next
            curNode?.next = prevNode
            prevNode = curNode
            curNode = storeNext
        }
        return prevNode
    }
    
    func removeNodes(_ head: ListNode?) -> ListNode? {
        let reversedHead = reverse(headNode: head)
        var result = ListNode(0)
        var previouslyGreaterNode = result
        var currentNode = reversedHead
        
        while currentNode != nil {
            if previouslyGreaterNode.val <= currentNode!.val {
                previouslyGreaterNode.next = currentNode
                previouslyGreaterNode = currentNode!
            }
            currentNode = currentNode?.next
        }
        previouslyGreaterNode.next = nil    // end node shouldn't have the next node referrence
        
        return reverse(headNode: result.next)
    }
}

//class Solution {
//    func removeNodes(_ head: ListNode?) -> ListNode? {
//        var resultNode = head
//        var oneBehindNode = head
//        var previouslyGreaterNode = head
//        var currentNode = head?.next
//
//        guard let headVal = head?.val, let headnextVal = head?.next?.val else {
//            return resultNode
//        }
//
//        if headVal < headnextVal {
//            resultNode = head?.next
//            previouslyGreaterNode = head?.next
//        }
//
//        while currentNode?.next != nil {
//            if currentNode!.next!.val > previouslyGreaterNode!.val {
//                previouslyGreaterNode = currentNode?.next
//                resultNode = currentNode?.next
//            }
//
//            if currentNode!.val < currentNode!.next!.val {
//                oneBehindNode?.next = currentNode?.next
//            }else {
//                oneBehindNode = currentNode
//            }
//
//            currentNode = currentNode?.next
//
//        }
//
//        return previouslyGreaterNode
//    }
//}



let sol = Solution()
var res = sol.removeNodes(ListNode(5, ListNode(2, ListNode(13, ListNode(3, ListNode(8))))))

while res != nil {
    print(res!.val)
    res = res?.next
}
print("The end")
