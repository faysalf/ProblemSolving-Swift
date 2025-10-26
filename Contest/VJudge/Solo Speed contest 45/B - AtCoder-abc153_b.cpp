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
    
    int h, n; cin >> h >> n;

    int sum = 0;
    for (int i=0; i<n; i++) {
        int m; cin >> m;
        sum += m;
    }
    if (sum >= h) cout << "Yes\n";
    else cout <<"No\n";

    return 0;
}