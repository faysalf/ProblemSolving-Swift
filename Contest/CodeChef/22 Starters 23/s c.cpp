#include <bits/stdc++.h>
using namespace std;

int32_t main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t; cin >> t;
	while (t--) {
		int n, k, x;
		cin >> n >> k >> x;
		if (x > k && k+1 == n) { cout << -1 << '\n'; }

		else {
			int stop = x - 1;
			for (int i=0; i < n; i++) {
				if (i != 0 && i != n) cout << ' ';
				if (i < x) cout << i;
				else cout << stop;

			}cout << '\n';
		}
	}

	return 0;
}