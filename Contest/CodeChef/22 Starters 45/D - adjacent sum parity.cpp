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
        vector<int>v(n);
        for (auto &i:v) cin >> i;
        //bool ok = 1;
        auto va = v;
        for (int i=0; i<n-1; i++) {
            if ((v[i]+v[i+1])%2 != va[i]) v[i+1]+=1;
        }
        //for (auto i:v) cerr << i <<' ';cerr<< '\n';
        if ((v[0]+v[n-1]) % 2 == va[n-1]) {
            cout << "YES\n";
        }
        else cout << "NO\n";
        //cout << v[0] << ' '<<v[n-1]<< '\n';
    }

    return 0;
}