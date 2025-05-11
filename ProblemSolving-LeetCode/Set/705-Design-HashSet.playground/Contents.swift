
class MyHashSet {
    var hashSet: [Bool] = []

    init() {
        hashSet = Array(repeating: false, count: 1000001)
    }
    
    func add(_ key: Int) {
        hashSet[key] = true
    }
    
    func remove(_ key: Int) {
        hashSet[key] = false
    }
    
    func contains(_ key: Int) -> Bool {
        hashSet[key]
    }
}


/**
 * Your MyHashSet object will be instantiated and called as such:
 * let obj = MyHashSet()
 * obj.add(key)
 * obj.remove(key)
 * let ret_3: Bool = obj.contains(key)
 */
