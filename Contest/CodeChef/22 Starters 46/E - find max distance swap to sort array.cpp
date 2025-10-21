//find maximum distance k we should swap that need min operation to sort the array

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

        int k = 0;
        for (int i=1; i<=n; i++) {
            int m; cin >> m;
            
            k = gcd(k,abs(m-i));
        }

        cout << k << '\n';
    }
    return 0;
}