#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define SetBit(x, k) (x |= (1LL << k))
#define ClearBit(x, k) (x &= ~(1LL << k))
#define CheckBit(x, k) ((x>>k)&1)
#define pi           acos(-1)

int32_t main() {

    
    int t; scanf("%lld", &t);

    for (int i=1; i<=t; i++) {
        int n, k; scanf("%lld %lld", &n, &k);

        int sum = 0, inp, mx = 0;
        for (int j=0; j<n; j++) {
            scanf("%lld", &inp);
            sum += inp;

            if (inp > mx) { 
                mx = inp; 
            }
        }

        printf("Case %lld: %lld\n", i, sum + mx * (k-1));
    }

    return 0;
}
