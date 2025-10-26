public class Node {
    public var val: Int
    public var left: Node?
    public var right: Node?
      public var next: Node?
    public init(_ val: Int) {
        self.val = val
        self.left = nil
        self.right = nil
        self.next = nil
    }
}


class Solution {
    func connect(_ root: Node?) -> Node? {
        
        var queue: [Node?] = [root]
        var tempQueue: [Node?] = []
        
        while (!queue.isEmpty) {
            let cnt = queue.count
            
            for idx in 0..<cnt-1 {
                queue[idx]?.next = queue[idx+1]
            }
            queue[cnt-1]?.next = nil
            
            for node in queue {
                let cur = queue.removeFirst()
                
                if let left = node?.left {
                    queue.append(left)
                }
                if let right = node?.right {
                    queue.append(right)
                }
                
            }
            
            
        }
        
        
        return root
    }
    
}
