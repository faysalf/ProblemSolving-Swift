#include <bits/stdc++.h>
using namespace std;

int32_t main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t; cin >> t;
	while (t--) {
		string s; cin >> s;
		int one = 0, zero = 0, ans = 0;
		for (char i:s) {
			if (i == '1') one++;
			else zero++;
			if (one > zero) {
				ans = max(zero, ans);
			}
			else if (one < zero) {
				ans = max(one, ans);
			}
		}cout << ans << '\n';
	}

	return 0;
}