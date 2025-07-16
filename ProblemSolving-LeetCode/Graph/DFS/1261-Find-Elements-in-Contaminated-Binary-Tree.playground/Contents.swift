
public class TreeNode {
    public var val: Int
    public var left: TreeNode?
    public var right: TreeNode?
    public init() { self.val = 0; self.left = nil; self.right = nil; }
    public init(_ val: Int) { self.val = val; self.left = nil; self.right = nil; }
    public init(_ val: Int, _ left: TreeNode?, _ right: TreeNode?) {
        self.val = val
        self.left = left
        self.right = right
    }
}
 

class FindElements {
    var nodeTracker: [Int: Bool] = [:]

    init(_ root: TreeNode?) {
        nodeTracker = [0 : true]
        retrieveTheTree(currentNode: root?.left, val: 1)
        retrieveTheTree(currentNode: root?.right, val: 2)
    }
    
    func retrieveTheTree(currentNode: TreeNode?, val: Int) {
        guard let currentNode else { return }
        
        nodeTracker[val] = true
        retrieveTheTree(currentNode: currentNode.left, val: 2*val + 1)
        retrieveTheTree(currentNode: currentNode.right, val: 2*val + 2)
        
    }
    
    func find(_ target: Int) -> Bool {
        nodeTracker[target] ?? false
    }
}

let obj = FindElements(
    TreeNode(
        -1,
         TreeNode(
            -1,
             TreeNode(-1),
             TreeNode(-1)
         ),
         TreeNode(-1)
    )
)
let obj2 = FindElements(
    TreeNode(
        -1,
         nil,
         TreeNode(
            -1,
             TreeNode(
                -1,
                 TreeNode(-1),
                 nil
             ),
             nil
         )
    )
)
debugPrint(obj2.nodeTracker)

/*
 
            -1=0
          /     \
        0       -1 = 2
               /   \
            -1=5     0
            /
          -1=11
 
 */
