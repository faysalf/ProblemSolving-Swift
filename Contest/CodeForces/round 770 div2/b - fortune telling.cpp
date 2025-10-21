#include <bits/stdc++.h>
using namespace std;
#define int long long int

int32_t main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t; cin >> t;
	while (t--) {
		int n, a, x; cin >> n >> a >> x;

		int arr[n];
		for (int i=0; i<n; i++) {
			cin >> arr[i];
			a += arr[i];
		}
		if (a%2 != x%2) cout << "Bob\n";
		else cout << "Alice\n";
	}

	return 0;
}