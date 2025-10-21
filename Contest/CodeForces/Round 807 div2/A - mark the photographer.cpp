#include <bits/stdc++.h>
using namespace std;
#define ll long long int

const int N = 1e5;
bool vis[N];
vector<int> g[2*N];
int par[N], dist[N];


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

        vector<int>v(n+n);
        for (auto &i:v) cin >> i;

        sort(v.begin(), v.end());

        int af = n;
        bool flag = 1;
        for (int i=0; i<n; i++) {
            if (v[af+i]-v[i] < m) {
                flag = 0;
                break;
            }
        }
        if (flag) cout << "YES\n";
        else cout << "NO\n";
    }

    return 0;
}
