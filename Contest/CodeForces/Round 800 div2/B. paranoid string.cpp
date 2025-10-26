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
        string s; cin >> s;

        int cnt = n * (n+1) / 2;

        for (int i=1; i<n; i++) {
            if (s[i]==s[i-1]) cnt -= i;
        }

        cout << cnt << '\n';
    }
    return 0;
}
