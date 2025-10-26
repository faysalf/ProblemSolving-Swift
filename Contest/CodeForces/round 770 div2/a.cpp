#include <bits/stdc++.h>
using namespace std;

int32_t main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t; cin >> t;
	while (t--) {
		int n, k; cin >> n >> k;
		string s; cin >> s;
		string ss = s;
		reverse(ss.begin(), ss.end());

		if (k==0 || s==ss) cout << 1 << '\n';
		else cout << 2 << '\n';
	}

	return 0;
}