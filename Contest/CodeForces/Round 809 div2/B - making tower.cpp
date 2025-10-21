#include <bits/stdc++.h>
using namespace std;
#define int long long int

const int N = 100007;
int dp[2][N];

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

        for (int i = 0; i < 2; i++) {
            for (int j = 1; j <= n; j++) {
                dp[i][j] = 0;
            }
        }

        for (int i = 1; i <= n; i++) {
            int m; cin >> m;
            dp[i&1][m] = max(dp[i&1][m], dp[(i^1) & 1][m] + 1);
        }

        for (int i = 1; i <= n; i++) {
            cout << max(dp[0][i], dp[1][i]) << ' ';
            cout << '\n';
        }

    }
    return 0;
}