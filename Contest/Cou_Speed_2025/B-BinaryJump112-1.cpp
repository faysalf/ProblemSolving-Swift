#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define SetBit(x, k) (x |= (1LL << k))
#define ClearBit(x, k) (x &= ~(1LL << k))
#define CheckBit(x, k) ((x>>k)&1)
#define pi           acos(-1)

int32_t main() {
    
    int t, a, b; cin >> t;
    
    while(t--) {
        cin >> a >> b;
        
        if (a <= b) {
            cout << "YES\n";
        }else {
            cout << "NO\n";
        }
    }
    
    return 0;
    
}
