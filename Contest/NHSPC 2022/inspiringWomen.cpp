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
    
    int t, n, s, sum; cin >> t >> n;
    double ss = (double) t/2; cerr << ceil(ss) << '\n';
    s = ceil(ss);

    if (s < n) sum = s*2 + (n-s);
    else if (s==n) sum = s*2;
    else sum = n*2;

    cout << sum << '\n';

    return 0;
}