#include <bits/stdc++.h>
using namespace std;
#define int long long int

const int mod = 1000003;

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
        string s; cin >> s;
        
        int res = 0;
        for (int i=0; i<n-1; i++) {
            if (s[i]=='1' && s[i+1]=='0') res++;
        }

        cout << res << '\n';

    }
    return 0;
}