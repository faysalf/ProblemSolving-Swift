#include <bits/stdc++.h>
using namespace std;
#define int long long

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
        int m = (n/3)*2 + (n/2)*2 + n;

        cout << m << '\n';



    }    

return 0;
}