class ListNode {
    var val: String
    var prev: ListNode?
    var next: ListNode?
    
    init(_ val: String) {
        self.val = val
    }
}

extension ListNode: Equatable, Hashable {
    public static func == (lhs: ListNode, rhs: ListNode) -> Bool {
        return lhs === rhs
    }
    
    public func hash(into hasher: inout Hasher) {
        hasher.combine(ObjectIdentifier(self))
    }
}

class BrowserHistory {

    var head: ListNode?
    var homePage: String?
    
    init(_ homepage: String) {
        head = ListNode(homepage)
        self.homePage = homepage
    }
    
    func visit(_ url: String) {
        let newVisitNode = ListNode(url)
        head?.next = newVisitNode
        newVisitNode.prev = head
        head = newVisitNode
    }
    
    func back(_ steps: Int) -> String {
        for _ in 0..<steps {
            if let prev = head?.prev {
                head = prev
            }
        }
        
        return head?.val ?? homePage!
    }
    
    func forward(_ steps: Int) -> String {
        if head?.next == nil {
            return head?.val ?? homePage!
        }
        
        for _ in 0..<steps {
            if let next = head?.next {
                head = next
            }
        }
        
        return head?.val ?? homePage!

    }
}

/**
 * Your BrowserHistory object will be instantiated and called as such:
 * let obj = BrowserHistory(homepage)
 * obj.visit(url)
 * let ret_2: String = obj.back(steps)
 * let ret_3: String = obj.forward(steps)
 */
