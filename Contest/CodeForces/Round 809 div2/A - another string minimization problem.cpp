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
        int n, m; cin >> n >> m;
        vector<char>ch(m+1, 'B');

        for (int i=1; i<=n; i++) {
            int te; cin >> te;

            if (te <= (m+1-te)) {
                if (ch[te] != 'A') ch[te] = 'A';
                else ch[m+1-te] = 'A';
            }
            else {
                if (ch[m+1 - te] != 'A') ch[m+1-te] = 'A';
                else ch[te] = 'A';
            }
        }
        for (int i=1; i<=m; i++) cout << ch[i];
        cout << '\n';
    }

    return 0;
}
