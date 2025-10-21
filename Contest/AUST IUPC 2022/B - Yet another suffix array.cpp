#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int32_t main() {
    
    int t; scanf("%d",&t);
    while (t--) {
        int n, q; scanf("%d %d",&n,&q);
        unordered_map<int, int> mp, pos;
        for (int i=0; i<n; i++) {
            int te; scanf("%d",&te);
            mp[te] = n-i;
            pos[te] = i+1;
        }
        vector<int>v(n+1);
        int j = 1;
        for (j=1; j<=n; j++) {
            v[j] = v[j-1] + mp[j];
        }

        while (q--) {
            int l, r;
            int k; scanf("%d",&k);
            auto lb = lower_bound(v.begin(), v.end(), k) - v.begin();

            int tem = lb;
            l = pos[lb];
            r = l + k-v[lb-1] -1;

            printf("%d %d\n",l,r);
            //cout << l << ' '<< r << '\n';
        }

    }

    return 0;
}


/* Brute force - unfortunately both got tle
#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int32_t main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int t; scanf("%d",&t);
    while (t--) {
        int n, q; scanf("%d %d",&n,&q);
        map<int, int> mp, pos;
        for (int i=0; i<n; i++) {
            int te; scanf("%d",&te);
            mp[te] = n-i;
            pos[te] = i+1;
        }
        //for (auto [a,b]:mp) cerr << a << ' '<< b << '\n';

        for (int i=0; i<q; i++) {
            int l, r;
            int k; scanf("%d",&k);
            for (auto [a,b]:mp) {
                if (k <= b) {
                    l = pos[a];
                    r = pos[a] + k -1;
                    //cerr << pos[a] << ' ' << (b-k) <<'\n';
                    
                    break;
                }
                //if (k==b)
                //cerr << k << ' '<<b << '\n';
                k -= b;
            }
            cout << l <<' '<< r << '\n';
        }
    }

    return 0;
}*/
