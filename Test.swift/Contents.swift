//: A UIKit based Playground for presenting user interface
  
import UIKit

func reverseString(x: String) -> String {
    
    var rev = ""; var cnt = x.count
    
    for char in x {
        rev = String(char) + rev
    }
    
    if (rev == x) {
        return "true"
    }else {
        return "false"
    }
        
}

if let str = readLine() {
    print(reverseString(x: str))
} else {
    print("No input provided.")
}
