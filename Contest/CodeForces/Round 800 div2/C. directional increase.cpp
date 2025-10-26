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
        vector<int> v(n);
        int sum = 0;

        for (int i=0; i<n; i++) {
            cin >> v[i];
            sum += v[i];
        }
        int genz;
        for (genz=n-1; genz>=0; genz--) {
            if (v[genz]) break;
        }
        int cnt = 0;
        bool flag = 1;

        for (int i=0; i<n; i++) {
            cnt += v[i];

            if (sum || (cnt <= 0 && i < genz)) {    //sum=0 hole beging poit e fire asa possible
                cout << "No\n";
                flag = 0;
                break;
            }
        }
        if (flag) cout << "Yes\n";
    }

    return 0;
}
