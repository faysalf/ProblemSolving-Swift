#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define SetBit(x, k) (x |= (1LL << k))
#define ClearBit(x, k) (x &= ~(1LL << k))
#define CheckBit(x, k) ((x>>k)&1)
#define pi           acos(-1)

int32_t main() {

    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int aa, bb;
    
    while (scanf("%d %d",&aa, &bb) && !(aa==0 && bb==0)) {
        double a = aa, b = bb;

        double w, o;

        double mn = INT_MAX;

        for (double i=0.005; i<=a/2 && i<a; i+=0.005) {
            w = i;
            o = a - i;
            double h = sqrt(o*o - w*w);
            double res = (a+b) - (w+h) + o;
            
            if (res) mn = min(res, mn);
        }
        printf("%.4f\n",mn);
        //cout << setprecision(4)<<fixed<< mn << '\n';

    }

    return 0;
}