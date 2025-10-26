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

        int n,m; cin >> n >> m;
        vector<int>v(n);
      
        for (int i=0; i<n; i++) {
            cin >> v[i];
        }
        if (m==1) cout << (n-1)/2 << '\n';  //1 hole 1 ghor bad diye diye rise hobe
        else {
            int cnt = 0;
            for (int i=1; i<n-1; i++) {
                if (v[i] > v[i-1]+v[i+1]) cnt++;
            }
            cout << cnt << '\n';
        }
    }

    return 0;
}