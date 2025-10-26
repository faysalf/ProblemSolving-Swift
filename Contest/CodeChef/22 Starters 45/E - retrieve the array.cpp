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
        int sm = 0, mn = INT_MAX;
        for (int i=0; i<n; i++) {
            cin >> v[i];
            //sm += v[i];
            mn = min(mn, v[i]);
        }
        vector<int> va(n);
        for (int i=0; i<n; i++) {
            va[i] = abs(v[i]-mn) +1;
            sm += va[i];
        }
        sm += va[0];
        int inc = (v[0]-sm) / (n+1);

        for (auto i:va) cout << i+inc << ' '; cout << '\n';
        //cerr << inc << '\n';
    }

    return 0;
}