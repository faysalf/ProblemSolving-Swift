class Solution {
    func findMinDifference(_ timePoints: [String]) -> Int {
        var minutes: [Int] = []
        var minDifference = Int.max
        
        for timePoint in timePoints {
            let time = timePoint.split(separator: ":")
            if let hourStr = time.first,
                    let hour = Int(hourStr),
                    let mntStr = time.last,
                    let mnt = Int(mntStr) {
                minutes.append(hour*60 + mnt)
            }
        }
        minutes.sort()
        let sz = minutes.count
        
        for idx in 1..<sz {
            let curDiff = min(minutes[idx-1]+1440 - minutes[idx], minutes[idx] - minutes[idx-1])
            minDifference = min(curDiff, minDifference)
        }
        
        // last and first time comparison
        let circularDifference = min(minutes[0]+1440 - minutes[sz-1], minutes[sz-1] - minutes[0])
        minDifference = min(circularDifference, minDifference)
        
        return minDifference
    }
    
}

let obj = Solution()
let res = obj.findMinDifference(["02:39","10:26","21:43"])
debugPrint(res)
