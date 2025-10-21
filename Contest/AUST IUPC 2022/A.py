#TLE !

from itertools import permutations

for i in range(int(input())):
    n, k, m = map(int,input().split())
    li = []
    for j in range(1,n+1):
        li.append(j)
    
    st = 1;
    sm = 0;
    for j in permutations(li,n):
        if (st==k):
            for k in range(n-1,n-m-1,-1):
                sm += j[k]
            break;
        st += 1
    
    print("Case %d: %d"%(i+1,sm))