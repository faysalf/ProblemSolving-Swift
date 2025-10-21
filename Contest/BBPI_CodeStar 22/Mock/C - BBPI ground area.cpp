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
        int x, y, xx, yy;
        cin >> x >> y >> xx >> yy;

        cout << ((xx-x)*(xx-x) + (yy-y) * (yy-y)) << '\n';
    }

    return 0;
}
