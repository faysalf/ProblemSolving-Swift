// Definition for singly-linked list.
public class ListNode {
    public var val: Int
    public var next: ListNode?
    public init(_ val: Int) {
        self.val = val
        self.next = nil
    }
}

extension ListNode: Equatable, Hashable {
    public static func == (lhs: ListNode, rhs: ListNode) -> Bool {
        return lhs === rhs
    }
    
    public func hash(into hasher: inout Hasher) {
        hasher.combine(ObjectIdentifier(self)) // Unique per instance
    }
}

// Brute force solution
class Solution {
    func hasCycle(_ head: ListNode?) -> Bool {
        var headCurr = head
        var nestedCurr = head
        var headLoopCnt = 0
        var nestedLoopCnt = 0
        
        while (headCurr?.next != nil) {
            while (nestedLoopCnt < headLoopCnt && nestedCurr != nil) {
                nestedLoopCnt += 1
                
                if nestedCurr == headCurr {
                    return true
                }
                nestedCurr = nestedCurr?.next
            }
            headCurr = headCurr?.next
            nestedCurr = head
            headLoopCnt += 1
            nestedLoopCnt = 0
        }
        
        return false
    }
}


// Floyd's cycle detection - solution
class Solution2 {
    func hasCycle(_ head: ListNode?) -> Bool {
        var slow = head
        var fast = head
        
        while (fast != nil && fast?.next != nil) {
            slow = slow?.next
            fast = fast?.next?.next
            
            if (slow == fast) {
                return true
            }
            
        }
        
        return false
    }
}


// Using hashmap - solution
class Solution3 {
    func hasCycle(_ head: ListNode?) -> Bool {
        var storeExistanceNodes: [ListNode: Int] = [:]
        var currentNode = head
        
        while (currentNode != nil) {
            if storeExistanceNodes[currentNode!] == 1 {
                return true
            }
            storeExistanceNodes[currentNode!] = 1
            currentNode = currentNode?.next
        }
        
        return false
    }
}
