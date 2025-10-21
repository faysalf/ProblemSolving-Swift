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
    
    int t; scanf("%lld",&t);
    for (int ca = 1; ca <= t; ca++) {
        int n; scanf("%lld",&n);
        int cnt = 0;
        for (int i=0; i<n; i++) {
            int te; scanf("%lld",&te);
            if (te==2 || te==3 || te==5 || te==7 || te==11 || te==13 || te==17 || te==19) cnt++;
        }
        if (cnt == n) printf("Case %lld: Yes\n", ca);
        else printf("Case %lld: No\n", ca);
    }

    return 0;
}
