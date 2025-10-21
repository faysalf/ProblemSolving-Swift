#include <bits/stdc++.h>
using namespace std;
#define int long long

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

        int cnt = 0;
        if (!(n&1)) {
            int d = n/2;
            for (int i=d; i>=1; i--) {

                int c = n - 2*i;
                if (i < c) break;

                if (i!=d) {
                    cnt += (i-c)/2 + 1;
                }
                else {
                    cnt += (i-1-c)/2 + 1;
                }
            }

        }
        else {
            double d = (double) (n)/2;
            for (double i=d; i>=1; i--) {

                double c = n - 2*i;
                if (i < c) break;

                cnt += (i-c)/2 + 1;
            }
            cerr << cnt << '\n';

        }
        if (n<3) cout << "0\n";
        else if (cnt == 1) cout << "1\n";
        else cout << cnt-1 << '\n';
        //cerr << cnt << ' ';
    }    

return 0;
}