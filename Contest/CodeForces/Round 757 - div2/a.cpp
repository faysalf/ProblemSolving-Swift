#include <bits/stdc++.h>
using namespace std;

int32_t main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n; cin >> n;
	while (n--) {
		int n, l, r, k; cin >> n >> l >> r >> k;
		vector <int> v;
		for (int i=1; i<=n; i++) {
			int f; cin >> f;
			if (f >= l and f <= r) {
				v.push_back(f);
			}
		}
		sort(v.begin(), v.end());
		int sum = 0, count = 0;

		for (int i=0; i < v.size(); i++) {
			if ((sum + v[i]) <= k) {
				sum += v[i];
				count++;
			}
		}
		cout << count << '\n';
	}

	return 0;
}