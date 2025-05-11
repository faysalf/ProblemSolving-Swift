
class MyHashMap {
    var hashMap: [Int] = []

    init() {
        hashMap = Array(repeating: -1, count: 1000001)
    }
    
    func put(_ key: Int, _ value: Int) {
        hashMap[key] = value
    }
    
    func remove(_ key: Int) {
        hashMap[key] = -1
    }
    
    func get(_ key: Int) -> Int {
        hashMap[key]
    }
}


/**
 * Your MyHashSet object will be instantiated and called as such:
 * let obj = MyHashSet()
 * obj.add(key)
 * obj.remove(key)
 * let ret_3: Bool = obj.contains(key)
 */
