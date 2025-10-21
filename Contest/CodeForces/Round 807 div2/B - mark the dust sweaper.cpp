#include <bits/stdc++.h>
using namespace std;
#define int long long int

int32_t main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;

        vector<int>v(n);
        int z = 0, sm = 0, sub = 0;
        for (int i=0; i<n; i++) {
            cin >> v[i];
            if (i != n-1) {
                if (v[i]==0 && sm) z++;
                else sm += v[i];
            }
        }
        
        cout << z+sm << '\n';

    }

    return 0;
}
