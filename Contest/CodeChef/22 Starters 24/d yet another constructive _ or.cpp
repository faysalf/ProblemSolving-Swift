#include <bits/stdc++.h>
using namespace std;

int32_t main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	
	int t; cin >> t;
	while (t--) {
		int x; cin >> x;
		/*if ((x&1) == 1) f = 1;
		else f = 2;*/
		if (x < 2) cout << "0 1 3\n";
		else {
			int r = (log2(x)/1) +1;
			int third = x + (pow(2,r));

			cout << 1 <<' '<< x << ' ' << third <<'\n';
		}
	}
	return 0;
}