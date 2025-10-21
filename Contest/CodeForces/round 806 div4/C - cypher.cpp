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
        for (auto &i:v) cin >> i;

        for (int i=0; i<n; i++) {
            int f; string s;
            cin >> f >> s;
            for (char j:s) {
                if (j == 'D') {
                    v[i]++;
                    if (v[i] > 9) v[i] = 0;
                }
                else {
                    v[i]--;
                    if (v[i] < 0) v[i] = 9;
                }
            }
        }
        for (auto i:v) {
            cout << i << ' ';
        }
        cout << '\n';
        
    }

    return 0;
}
