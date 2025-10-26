#include <bits/stdc++.h>
using namespace std;

int32_t main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	
	int t; cin >> t;
	while (t--) {
		int x, y; cin >> x>>y;
		if (y==0) cout << x << '\n';
		else if (x==y) cout << (x*2)-1 << '\n';
		else if (x > y) cout << (y*2) + (x-y) << '\n';
	}
	return 0;
}