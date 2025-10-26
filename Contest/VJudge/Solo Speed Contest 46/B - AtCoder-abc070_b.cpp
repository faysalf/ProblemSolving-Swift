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

    int a, b, c, d; cin >> a >> b >> c >> d;
    int up = min(b,d), low = max(a,c);
    up = up - low;

    if (up > 0) cout << up << '\n';
    else cout << "0\n";

    return 0;
}