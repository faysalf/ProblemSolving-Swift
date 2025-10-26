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
        
        int dif = abs(a-b);
        int move = 0;
        
        while (dif > 0) {
            int pw = log2(dif);
            
            dif -= pow(2, pw);
            move++;
            
        }
        
        cout << move << '\n';
        
    }
    
    return 0;
    
}
