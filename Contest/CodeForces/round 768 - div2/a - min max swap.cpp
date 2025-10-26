#include <bits/stdc++.h>
using namespace std;

int32_t main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t; cin >> t;
	while (t--) {
		int n; cin >> n;

		int a[n];
		for (int i=0; i<n; i++) {
			cin >> a[i];
		}
		int b[n];
		for (int i=0; i<n; i++) {
			cin >> b[i];
		}
		int mxa = 0, mxb = 0;

		for (int i=0; i<n; i++) {
			if (b[i] <= a[i]) {
				mxb = max(mxb, b[i]);
				mxa = max(mxa, a[i]);
			}
			else {
				mxb = max(mxb, a[i]);
				mxa = max(mxa, b[i]);
			}
		}cout << mxa * mxb << '\n';

	}

	return 0;
}