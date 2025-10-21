#include <bits/stdc++.h>
using namespace std;
#define int long long int

int row[50] = {0,1,1,0,0,1,1,0,0,1,1,0,0,1,1,0,0,1,1,0,0,1,1,0,0,1,1,0,0,1,1,0,0,1,1,0,0,1,1,0,0,1,1,0,0,1,1,0,0,1};
int col[50] = {1,0,0,1,1,0,0,1,1,0,0,1,1,0,0,1,1,0,0,1,1,0,0,1,1,0,0,1,1,0,0,1,1,0,0,1,1,0,0,1,1,0,0,1,1,0,0,1,1,0};

int32_t main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t; cin >> t;
    while (t--) {
        int n,m;cin >> n>>m;
        for (int i=0; i<m; i++) cout << row[i] <<' ';
        cout << '\n';
        for (int i=0; i<m; i++) cout << col[i] << ' ';
        cout << '\n';

        int cnt = 1;
        bool flag = 0;
        for (int i=2; i<n; i++) {
            if (cnt == 2) {
                if (flag) flag = 0;
                else flag = 1;
                cnt = 1;
            }
            else cnt++;

            for (int j=0; j<m; j++) {
                if (!flag) {
                    cout << col[j] << ' ';
                }
                else {
                    cout << row[j] << ' ';
                }
            }
            cout << '\n';

        }
    }
    return 0;
}