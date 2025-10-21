#include <bits/stdc++.h>
using namespace std;
#define ll long long int

ll fac(int n) {
    ll ft = 1;
    for (int i=2; i<=n; i++) {
        ft *= i;
    }
    return ft;
}

int32_t main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int t; cin >> t;
    
    if (t%2==0 && t%5==0) cout << "Best\n";
    else if (t%2==0 && t%5) cout << "Good\n";
    else if (t%5==0 && t%2) cout << "Better\n";
    else cout << "Bad\n";
    
    return 0;
}
