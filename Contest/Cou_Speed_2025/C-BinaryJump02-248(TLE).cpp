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
        int i = max(a, 1*1LL);
        set<int> res;
        
        while (i <= dif) {
            if (dif%i==0 && b%i==a) {
                res.insert(i);
            }
            i++;
        }
        
        for (auto val: res) {
            cout << val << ' ';
        }
        cout << '\n';
        
    }
    
    return 0;
    
}
