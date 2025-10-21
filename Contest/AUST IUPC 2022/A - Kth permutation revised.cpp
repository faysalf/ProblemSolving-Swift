#include <bits/stdc++.h>
using namespace std;
#define int long long int

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t; scanf("%lld",&t);
    for (int ts=1; ts<=t; ts++) {

        int n, k, m; scanf("%lld %lld %lld",&n, &k, &m);

        int sum = 0;
        if (m > 4) {
            sum = 1LL * (n*(n+1))/2;
            n -= m;
            sum -= 1LL * (n*(n+1))/2;
        }
        else {
            vector<int> v;
            int mn;
            if (n<4) mn = n;
            else mn = 4;

            for(int i=mn; i>0; i--) {
                v.push_back(n-i+1);     //shesher min(n,4)ta num
            }
            k--;
            while((k--)) {
                next_permutation(v.begin(), v.end());
            }
            for (int i=mn-1; i>=0 && m; i--, m--) {
                sum += 1LL * v[i];
            }
        }
        //cout << "Case "<<ts<<": "<< sum << '\n';
        printf("Case %lld: %lld\n",ts,sum);
    }

    return 0;
}
