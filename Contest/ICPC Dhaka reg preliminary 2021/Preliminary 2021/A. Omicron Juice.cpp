#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define SetBit(x, k) (x |= (1LL << k))
#define ClearBit(x, k) (x &= ~(1LL << k))
#define CheckBit(x, k) ((x>>k)&1)
#define pi           acos(-1)

int32_t main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int t; cin >> t;
    for (int i=0; i<t; i++) {
    	int a, b, c; cin >> a >> b >> c;

    	if ((a+b+c)%3==0) printf("Case %d: Peaceful\n",i);
    	else printf("Case %d: Fight\n",i);
    }

    return 0;
}
