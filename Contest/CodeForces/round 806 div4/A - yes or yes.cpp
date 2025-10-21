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
        string s; cin >> s;

        if (s=="YES" || s=="Yes" || s=="yEs" || s=="yeS" || s=="YEs" || s=="yES" || s=="Yes" || s=="yes" || s=="YeS") cout << "YES\n";
        else cout << "NO\n";
    }

    return 0;
}
