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
        map<int, bool>m;
      
        for (int i=0; i<n; i++) {
            cin >> v[i];
            m[v[i]] = 1;
        }
        sort(v.begin(), v.end());
        bool flag = 1;
        if (!m[v[0]+v[1]+v[2]] || !m[v[n-1]+v[n-2]+v[n-3]]) flag = 0;

        for (int i=0; i<n-2; i++) {
            if (!m[v[i]+v[i+1]+v[n-1]] || !m[v[n-1]+v[n-2]+v[i]]) {
                flag = 0;
                break;
            }
        }
        
        if (flag) cout << "YES\n";
        else cout << "NO\n";
    }

    return 0;
}