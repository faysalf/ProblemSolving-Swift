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
    int idx = -1;
    int cnt = 0;
    for (int i=0; i<n; i++) {
        int a, b; cin >> a >> b;
        if (a==b && idx+1==i) {
            cnt++;         }
        else {
            if (cnt>=3) continue;
            else {
                cnt = 0;
            }
        }
        //cerr << cnt << '\n';
        idx = i;
    }
    if (cnt>=3) cout << "Yes\n";
    else cout <<"No\n";

    return 0;
}