#include <bits/stdc++.h>
using namespace std;

int32_t main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t; cin >> t;

	while (t--) {
		int n, x, y; cin >> n >> x >> y;
		int arr[n];

		for (int i=0; i<n; i++) {
			cin >> arr[i];
		}
		bool flag = false;

		int brr[n];
		for (int i=0; i<n; i++) {
			cin >> brr[i];
			if (brr[i]-x == arr[i] or brr[i]-y == arr[i]) {
				continue;
			}
			else flag = true;
		}
		if (flag) {
			cout << "No\n";
		}
		else { cout << "Yes\n" ;}
	}

	return 0;
}