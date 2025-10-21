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
    
    int t; cin >> t;
    while (t--) {
        int n, c, q; cin >> n >> c >> q;
        string s; cin >> s;

        vector<pair<int, int>> lr(c), opt(c);

        int cur = n;
        for (int i=0; i<c; i++) {
            int l, r; cin >> l >> r;
            lr[i] = {l,r};
            opt[i] = {cur+1, cur + (r-l+1)};
            cur = cur + (r-l +1);
        }
        while (q--) {
            int k; cin >> k;
            if (k <= n) cout << s[k-1] << '\n';
            else {
                for (int i=c-1; i>=0; i--) {

                    if (k >= opt[i].first && k <= opt[i].second) {
                        k = (lr[i].first) + (k - opt[i].first);
                    }
                }
                cout << s[k-1] << '\n';
            }
        }
    }
    
    return 0;
}




// #include <bits/stdc++.h>
// using namespace std;
// #define int long long int

// int32_t main() {
//     #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
//     #endif
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);
    
//     int t; cin >> t;
//     while (t--) {
//         int n, c, q; cin >> n >> c >> q;
//         string s; cin >> s;

//         vector<int> l(c), r(c), len(c+1);
//         len[0] = n;
//         for (int i=0; i<c; i++) {
//             cin >> l[i] >> r[i];
//             len[i+1] = len[i] + (r[i]-l[i]+1);
//         }
//         while (q--) {
//             int k; cin >> k;

//             assert(k <= len[c]);
//             for (int i = c-1; i >= 0; i--) {
//                 if (k > len[i]) {
//                     k = l[i] + k-len[i] - 1;
//                 }
//             }
//             assert(k<=n);
//             cout << s[k-1] << '\n';

//         }

//     }

//     return 0;
// }
