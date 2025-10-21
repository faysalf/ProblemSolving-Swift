#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int32_t main() {

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    ios_base::sync_with_stdio(0);
    cin.tie(0);


    int t; scanf("%d",&t);
    for (int i=1; i<=t; i++) {
        
        int a, b, c, k; scanf("%d %d %d %d", &a, &b, &c, &k);

        int tt = 100;
        while (tt--) {
            if (a > b+k && a >= k) {
                a -= k;
                b += k;
            }
            else if (a+k < b && b >= k) {
                b -= k;
                a += k;
            }
            if (a > c+k && a >= k) {
                a -= k;
                c += k;
            }
            else if (a+k < c && c >= k) {
                a += k;
                c -= k;
            }
            if (b > c+k && b >= k) {
                b -= k;
                c += k;
            }
            else if (b+k < c && c >= k) {
                c -= k;
                b += k;
            }
        }

        if (a==b && b==c && a==c) printf("Case %d: Peaceful\n",i);
        else printf("Case %d: Fight\n",i);


    }

    return 0;
}




/*
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

    return 0;
}*/
