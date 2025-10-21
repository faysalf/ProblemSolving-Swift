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
        string ss;
        while (getline(cin,ss)) {
            if (ss=="") break;
        }

        int n, q; cin >> n >> q;

        map<int, int>mn,mx;
        for (int i=1; i<=n; i++) {
            int f; cin >> f;

            if (!mn[f]) mn[f] = i;
            //else mn[f] = min(mn[f],i);

            mx[f] = i;
        }
        for (int i=0; i<q; i++) {
            int a, b; cin >> a >> b;
            if (mn[a] && mn[b]) {
                if (mn[a] < mx[b]) cout << "YES\n";
                else cout << "NO\n";
            }
            else cout << "NO\n";
        }
    }
    
    return 0;
}