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

    	int n; scanf("%lld", &n);

    	int gcdd; scanf("%lld", &gcdd);

    	for (int j=0; j<n-1; j++) {
    		int m; scanf("%lld", &m);

    		gcdd = gcd(gcdd, m);
    	}

    	int gcd2; scanf("%lld", &gcd2);

    	for (int j=0; j<n-1; j++) {
    		int m; scanf("%lld", &m);
    		gcd2 = gcd(gcd2, m);
    	}

    	if (gcdd >= 1 && gcd2 >= 1) printf("Case %lld: %s %s\n", i, "Yes", "No");
    	else printf("Case %lld: %s %s\n", i, "Yes", "Yes");
    	

    }




    return 0;
}
