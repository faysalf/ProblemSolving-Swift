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
    for (int i=1; i<=t; i++) {
        int n; cin >> n;
        int m = n;

        int cnt = 0;

        while (n) {
            int f = n%10;
            if (f != 0 && m%f==0) cnt++;
            n /= 10;
        }
        cout << "Case "<<i<<": "<<cnt << '\n';
    }

    return 0;
}
