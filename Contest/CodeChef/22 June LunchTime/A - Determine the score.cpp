#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int gcd(int a, int b) {
    if (a==0) return b;
    if (b==0) return a;
    if (a<b) swap(a,b);
    return gcd(a%b, b);
}
int lcm(int a, int b) {
    return (a*b) / gcd(a,b);
}
int lcmgcd(int a, int b) {
    return a * b;
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
        int n, x; cin >> n >> x;

        double point = (double) n/10;

        cout << x * point << '\n';
    }

    return 0;
}
