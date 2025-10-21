#include <bits/stdc++.h>
using namespace std;
#define SetBit(x, k) (x |= (1LL << k))
#define ClearBit(x, k) (x &= ~(1LL << k))
#define CheckBit(x, k) ((x>>k)&1)
#define pi           acos(-1)

int32_t main() {
 
    int t; scanf("%d",&t);
    for (int i=1; i<=t; i++) {
        
        int a, b, c, k; scanf("%d %d %d %d", &a, &b, &c, &k);

        if ((a<k && b<k) || (a<k && c<k) || (b<k && c<k) || (a<k && b<k && c<k && (a!=b || a!=c || b!=c))) printf("Case %d: Fight\n", i);
        else {
            int x = a%k;
            int y = b%k;
            int z = c%k;

            a -= x;
            b -= y;
            c -= z;

            a /= k;
            b /= k;
            c /= k;

            if ((a+b+c) % 3 == 0 && x==y && y==z) printf("Case %d: Peaceful\n", i);
            else printf("Case %d: Fight\n", i);
        
        }

    }

    return 0;
}