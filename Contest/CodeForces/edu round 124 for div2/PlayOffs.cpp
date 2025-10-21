#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t; cin >> t;
	while  (t--) {
		int n; cin >> n;
		cout << (int) pow(2,n) - 1 << '\n';
	}	
	cerr << (int) pow(2,30) << '\n';

	return 0;
}