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
        int x, y; cin >> x >> y;

        int z = (x^y);
        vector<int>v;
        if (x&1) v.push_back(x^2);
        if (y&1) v.push_back(y^2);
        if (z&1) v.push_back(z^2);

        sort(v.begin(),v.end());

        cout << "2 "<< v[0]<<' '<<v[1]<<'\n';
    }
    return 0;
}