class Solution {
    func findJudge(_ n: Int, _ trust: [[Int]]) -> Int { //[Int: Set<Int>] {
        var trustByPeople: [Int: Set<Int>] = [:]
        var cantBeJudge: Set<Int> = []
        
        guard !trust.isEmpty else {
            return n == 1 ? n: -1
        }
        
        for peoples in trust {
            guard let maybeJudge = peoples.last, let beleiver = peoples.first else {
                return -1
            }
            if trustByPeople[maybeJudge] == nil {
                trustByPeople[maybeJudge] = []
            }
            trustByPeople[maybeJudge]?.insert(beleiver)
            cantBeJudge.insert(beleiver)
        }
        
        //return trustByPeople
        
        for people in trustByPeople {
            if !(cantBeJudge.contains(people.key)) && people.value.count == n-1 {
                return people.key
            }
        }
        
        return -1
    }
}

let sol = Solution()
let res = sol.findJudge(2, [[1, 2]])
print(res)
