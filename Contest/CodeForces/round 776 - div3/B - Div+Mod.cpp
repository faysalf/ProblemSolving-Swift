#include <bits/stdc++.h>
using namespace std;

int32_t main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

 	int t; cin >> t;
 	while (t--) {
 		long long l, r, a,te, mp, mx = 0;
 		cin >> l >> r >> a;
 		for (int i=0; i<100; i++) {
 			te = (r/a)*a -1;
 			mp = te/a + te%a;

 			if (te>=l && te<=r && mp > mx) mx = mp;
 			te -= a;
 		}
 		cout << max(r/a + r%a, mx) << '\n';
 	}
	return 0;
}