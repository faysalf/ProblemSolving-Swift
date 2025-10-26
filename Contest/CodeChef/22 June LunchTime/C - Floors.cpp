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
        
        if (p<=10) p = 10;
        else if (p<=20) p = 20;
        else if (p<=30) p = 30;
        else if (p<=40) p = 40;
        else if (p<=50) p = 50;
        else if (p<=60) p = 60;
        else if (p<=70) p = 70;
        else if (p<=80) p = 80;
        else if (p<=90) p = 90;
        else p = 100;

        if (q<=10) q = 10;
        else if (q<=20) q = 20;
        else if (q<=30) q = 30;
        else if (q<=40) q = 40;
        else if (q<=50) q = 50;
        else if (q<=60) q = 60;
        else if (q<=70) q = 70;
        else if (q<=80) q = 80;
        else if (q<=90) q = 90;
        else q = 100;

        if (p>q) cout << (p-q)/10 << '\n';
        else cout << (q-p)/10 << '\n';
       
    }

    return 0;
}
