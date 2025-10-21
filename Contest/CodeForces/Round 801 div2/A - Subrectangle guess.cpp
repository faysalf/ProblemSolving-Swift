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
        int n, m; cin >> n >> m;
        ll mx = -1e10, r, c;

        int arr[n][m];

        for (int i=0; i<n; i++) {
            for (int j=0; j<m; j++) {
                cin >> arr[i][j];
                if (arr[i][j] > mx) {
                    mx = arr[i][j];
                    r = i;
                    c = j;
                }
            }
        }
        cout << max(r+1, n-r) * max(c+1, m-c) << '\n';
    }

    return 0;
}
