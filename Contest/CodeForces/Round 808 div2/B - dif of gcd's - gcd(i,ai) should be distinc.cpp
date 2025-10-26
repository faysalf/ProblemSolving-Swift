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
        int n, l, r; cin >> n >> l >> r;

        bool flag = 1;
        vector<int>res;
        for (int i=1; i<=n; i++) {
            if (r - r%i < l) {          //gcd(i, ai) == i korte ai%i==0 hote hobe, taholee kebol greatest common divisor i hobe. obviously i <= ai hobe
                cout << "NO\n";
                flag = 0;
                break;
            }
            else res.push_back(r - r%i);
        }
        if (flag) {
            cout << "YES\n";
            for (auto i:res) cout << i << ' ';
            cout << '\n';
        }
    }
    
    return 0;
}
