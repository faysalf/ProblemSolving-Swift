#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int32_t main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t; cin >> t;
	while (t--) {
		int x, y; cin >> x >> y;

		if (x==0 && y==0) cout << "0\n";
		else {
			double res = (double) sqrt(x*x + y*y);
			if (res == int(res)) {
				cout << "1\n";
			}
			else {
				cout << "2\n";
			}
		}
	}

	return 0;
}