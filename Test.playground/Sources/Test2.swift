//
//  Test2.swift
//  
//
//  Created by Md. Faysal Ahmed on 29/10/23.
//

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
