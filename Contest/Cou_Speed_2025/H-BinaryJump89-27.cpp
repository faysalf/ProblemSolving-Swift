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
        int current = a > b ? a : min(a, b);
        int move = 0;
        vector<int> values;
        values.push_back(current);

        if (a > b) {
            while (dif > 0) {
                int pw = log2(dif);
                int jump = pow(2, pw);
                dif -= jump;
                move++;
                
                current -= jump;
                values.push_back(current);
                
            }
        
            cout << move << '\n';
            
            for (auto val: values) {
                cout << val << ' ';
            }
            if (move == 0) {
                cout << a;
            }
            cout << '\n';
            
        }
        else {
            while (dif > 0) {
                int pw = log2(dif);
                int jump = pow(2, pw);
                dif -= jump;
                move++;
                
                if (current < 0) {
                    if (a < b) {
                        current += jump;
                    }else {
                        current -= jump;
                    }
                    values.push_back(current);
                }else {
                    current += jump;
                    values.push_back(current);
                }
                
            }
        
            cout << move << '\n';
            
            for (auto val: values) {
                cout << val << ' ';
            }
            cout << '\n';
        
        }
        
    }
    
    return 0;
    
}
