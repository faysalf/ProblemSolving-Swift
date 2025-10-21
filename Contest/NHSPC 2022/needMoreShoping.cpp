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
    
    map<int, string> m;
    m[0] = "abcdef";
    m[1] = "bc";
    m[2] = "abdeg";
    m[3] = "abcdg";
    m[4] = "bcfg";
    m[5] = "acdfg";
    m[6] = "acdefg";
    m[7] = "abc";
    m[8] = "abcdefg";
    m[9] = "abcdfg";

    int t; cin >> t;
    while (t--) {
        string s; cin >> s;
        string tot = "";
        for (auto i:s) {
            int j = i - 48;
            tot += m[j];
        }
        cout << tot << '\n';
    }
    
    return 0;
}