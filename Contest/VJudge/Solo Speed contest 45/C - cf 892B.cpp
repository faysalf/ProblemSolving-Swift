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
    
    int n; cin >> n;
    vector<int>L(n);
    for (int i=0; i<n; i++) {
        cin >> L[i];
    }
    int cnt = 0;
    int str = n-1 - L[n-1];
    for (int i=n-2; i>=0; i--) {
        if (i >= str) {
            cnt++;
            if (i-L[i] < str) str = i-L[i];
        }
        else {
            if (i-L[i] < str) str = i-L[i];
        }
    }
    cout << n-cnt << '\n';

    return 0;
}