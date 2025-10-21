#include <bits/stdc++.h>
using namespace std;
#define int long long int

int gcd(int a, int b) {
    if (a==0) return b;
    if (b==0) return a;
    if (a<b) swap(a, b);
    return gcd(a%b, b);
}

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
        int gc = 0;             // 0 ke jekono number diye devide kora jay
        vector<int>v(n);

        for (int i=0; i<n; i++) {
            cin >> v[i];
            gc = gcd(gc, v[i]);
            cerr << gc << ' ';
        }
        if (gc%v[0] == 0) cout << "YES\n";
        else cout << "NO\n";
        cerr << '\n';
    }
    
    return 0;
}