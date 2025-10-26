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
        int p, q; cin >> p >> q;

        int re = (p+q) % 4;

        if (re==1 || re==0) cout << "Alice\n";
        //else if (re==2) cout << "Bob\n";
        else cout << "Bob\n";
       
    }

    return 0;
}
