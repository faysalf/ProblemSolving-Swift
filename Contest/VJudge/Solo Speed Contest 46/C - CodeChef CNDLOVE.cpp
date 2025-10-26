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
        int sm = 0;
        for (int i=0; i<n; i++) {
            int m; cin >> m;
            sm += m;
        }
        if (sm&1) cout << "YES\n";
        else cout << "NO\n";
    }

    return 0;
}