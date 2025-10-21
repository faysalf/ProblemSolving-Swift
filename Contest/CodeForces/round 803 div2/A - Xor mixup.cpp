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
    
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector<int>v(n);
        int xr = 0;
        for (int i=0; i<n; i++) {
            cin >> v[i];
            xr ^= v[i];
        }
        for (auto i:v) {
            if ((xr^i) == i) {
                cout << i << ' ';
                break;
            }
        }
        cout << '\n';
    }

    return 0;
}