public class Node {
    public var val: Int
    public var children: [Node]
    public init(_ val: Int) {
        self.val = val
        self.children = []
    }
}


class Solution {
    func dfs(_ root: Node?, res: inout [Int]) {
        guard let root else {
            return
        }
        
        for child in root.children {
            dfs(child, res: &res)
        }
        res.append(root.val)

    }
    
    func postorder(_ root: Node?) -> [Int] {
        var result: [Int] = []
        dfs(root, res: &result)
        
        return result
    }
}
