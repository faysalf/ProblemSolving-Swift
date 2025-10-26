//https://codeforces.com/contest/1706/problem/C
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
        int n; cin >> n;

        vector<int>v(n), ans(n);
        for (auto &i:v) cin >> i;

        int cost = 0;
        for (int i=1; i<n; i+=2) {
            if (i==n-1) continue;

            int te = (max(v[i-1], v[i+1]));
            if (te >= v[i]) cost += (te-v[i]) + 1;
            ans[i] = cost;
        }
        if (!(n&1)) {
            int cost2 = 0;
            for (int i=n-2; i>1; i-=2) {
                if (i <= 1) continue;

                int te = max(v[i-1], v[i+1]);
                if (te >= v[i]) cost2 += te-v[i] +1;
                    
                if (i>2) cost = min(cost, cost2+ans[i-3]);  //i-3, cus, 1st e ans e i-3 te store korechhi every time from rend.
            }
            cost = min(cost, cost2);
        }
        cout << cost << '\n';



        // else {
        //     int ev = 0, ex, tv = 0, tx;
        //     for (int i=1; i<=n-3; i++) {
        //         int te = 0, tt = 0;
        //         if (v[i] <= max(v[i-1],v[i+1])) {
        //             te = max(v[i-1], v[i+1]) - v[i] + 1;
        //             if (te >= ev) {
        //                 tv = ev; tx = ex;
        //                 ev = te, ex = i;
        //             }


        //         }
        //         if (v[i+1] <= max(v[i], v[i+2])) {
        //             te = max(v[i], v[i+2]) - v[i+1] + 1;
        //             if (te >= ev) {
        //                 tv = ev; tx = ex;
        //                 ev = te, ex = i;
        //             }
        //         }
        //     }
        //     int f = 0, s = 0;
        //     for (int i=1, j=2; i<n-1 && j<n-1; i+=2, j+=2) {
        //         if (i>=n-1 || j >= n-1) continue;

        //         if (i==ex) i += 1;
        //         else if (j==ex) j += 1;

        //         int te = max(v[i-1], v[i+1]);
        //         if (te >= v[i]) f += te - v[i] + 1;

        //         te = max(v[j-1], v[j+1]);
        //         if (te >= v[j]) s += te - v[j] + 1;
        //     }
        //     cout << min(f, s) << '\n';



            // int cnt = 0, dif = ex - tx;
            // if (dif != 1) {
            //     for (int i=ex+1; i<n-1; i+=2) {
            //         if (i==tx) i += 1;

            //         int te = max(v[i-1], v[i+1]);
            //         if (te >= v[i]) cnt += te - v[i] + 1;
            //     }
            //     for (int i=ex-1; i>1; i-=2) {
            //         if (i==tx) i -= 1;
            //         int te = max(v[i-1], v[i+1]);
            //         if (te >= v[i]) cnt += te - v[i] + 1;
            //     }
            // }
            // else {
            //     for (int i=ex+1; i<n-1; i+=2) {
            //         if (i == tx) i += 1;

            //         int te = max(v[i-1], v[i+1]);
            //         if (te >= v[i]) cnt += te - v[i] + 1;
            //     }
            //     for (int i=ex-1; i>1; i-=2) {
            //         if (i == tx) i -= 1;
            //         int te = max(v[i-1], v[i+1]);
            //         if (te >= v[i]) cnt += te - v[i] + 1;
            //     }

            // }
            // cout << cnt << '\n';


            // int c1 = 0, c2 = 0;
            // for (int i=1, j=2; i<n-1 && j<n-1; i+=2, j+=2) {
            //     if (i>=n-2 || j>=n-1) continue;
            //     int te = max(v[i-1], v[i+1]);
            //     if (te >= v[i]) c1 += te-v[i] + 1;

            //     te = max(v[j-1], v[j+1]);
            //     if (te >= v[j]) c2 += te-v[j] + 1;
            // }
            // cout << min(c1, c2) << '\n';

            // for (int i=1; i<n-1; i++) {

            // }
    }

    return 0;
}