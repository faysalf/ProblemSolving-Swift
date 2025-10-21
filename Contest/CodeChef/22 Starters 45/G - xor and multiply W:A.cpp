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

        int n, a, b; cin >> n >> a >> b;
        int pw = (1<<(n-1)), pw2 = (1<<(n-2));

        int mxa = a, mxb = b;
        // for (int i=1; i<n; i++) {
        //     int p = (1<<(n-i));
        //     mxa = max(a,max(mxa,(a^p)));
        //     mxb = max(b,max(mxb,(b^p)));
        // }
        // cout << mxa*mxb << '\n';
        // cerr << mxa <<' '<<mxb << '\n';
        int mx = a*b, x = 0;
        //if (n>=2) {
            // for (int i=(1<<(n))-1; i>=(1<<(n-1)); i--) {
            //     mxa = max(mxa, (a^i));
            //     mxb = max(mxb, (b^i));
            //     if ((mxa*mxb) > mx) {
            //         mx = mxa*mxb;
            //         x = i; 
            //     }
            // }

       // }
        for (int i=1; i<10000&&(i<a || i<b); i*=2) {
                mxa = (a^i);
                mxb = (b^i);
                if ((mxa*mxb) > mx) {
                    mx = mxa*mxb;
                    x = i;
                }
            }
        mxa = a^(a+1);
        mxb = b^(a+1);
        if (mxb*mxa > mx && (a+1)<(1<<n)) {
            mx = mxa*mxb;
            x = a+1;
        }
        mxa = a^(b+1);
        mxb = b^(b+1);
        if (mxb*mxa > mx && (b+1)<(1<<n)) {
            mx = mxa*mxb;
            x = b+1;
        }

        mxa = a^((1<<n)-1);
        mxb = b^((1<<n)-1);
        if (mxb*mxa > mx) {
            mx = mxa*mxb;
            x = a+1;
        }

        mxa = a^((1<<(n-1)));
        mxb = b^((1<<(n-1)));
        if (mxb*mxa > mx) {
            mx = mxa*mxb;
            x = a+1;
        }
        // if (n>=8) {
        //     for (int i=(1<<n)-10000; i<(1<<n); i++) {
        //         mxa = (a^i);
        //         mxb = (b^i);
        //         if ((mxa*mxb) > mx) {
        //             mx = mxa*mxb;
        //             x = i;
        //         }
        //     }
        // }
        // else {
        //     for (int i=1; i<(1<<n); i++) {
        //         mxa = (a^i);
        //         mxb = (b^i);
        //         if ((mxa*mxb) > mx) {
        //             mx = mxa*mxb;
        //             x = i;
        //         }
        //     }
        // }
        // for (int i=1; i<(1<<n); i+=(i<<1)) {
        //     mxa = (a^i);
        //     mxb = (b^i);
        //     if ((mxa*mxb) > mx) {
        //         mx = mxa*mxb;
        //         x = i;
        //     }
        // }

        cout << x << '\n';
    }

    return 0;
}