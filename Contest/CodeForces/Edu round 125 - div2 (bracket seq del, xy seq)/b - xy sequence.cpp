#include <bits/stdc++.h>
using namespace std;
#define int long long int

int32_t main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t; cin >> t;
	while (t--) {
		int N, b, x, y;
		cin >> N >> b >> x >> y;

		int count = 0, sum = 0, pre = 0;
		while (count < N) {
			if (pre+x > b) pre = pre - y;
			else pre = pre + x;
			sum += pre;
			count++;
		}
		cout << sum << '\n';
	}

	return 0;
}