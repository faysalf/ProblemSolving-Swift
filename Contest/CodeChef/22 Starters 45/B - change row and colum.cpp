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

        int m, a, b, c; cin >> m >> a >> b >> c;
        int sum = a+b+c;

        if (sum <= m) cout << "0\n";
        else if (sum - max(a,b) <= m) cout << "1\n";
        else cout << "2\n";
        
    }

    return 0;
}