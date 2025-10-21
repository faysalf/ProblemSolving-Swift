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

    int n, a, b; cin >> n >> a >> b;

    a = abs(n-a); b = abs(n-b);

    if (min(a,b)==a) cout << "A\n";
    else cout << "B\n";

    return 0;
}