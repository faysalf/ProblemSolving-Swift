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

        if (n&1) cout << "-1\n";
        else {
            cout << 0<<' '<< 0<<' '<<n/2 << '\n';
            //cerr << (0^0) + (0^(n/2))+((n/2)^0)<<'\n';
        }
    }
    return 0;
}