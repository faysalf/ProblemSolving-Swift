#include <bits/stdc++.h>
using namespace std;
#define int long long int

int32_t main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t; cin >> t;
	while(t--) {
		int n; cin >> n;

		vector <int> v;
		int temp = 1;
		v.push_back(temp);
		bool flag = false;
		for (int i=1; i<n; i++) {
			if (temp*3 > 1e9) {
				flag = true;
				// cerr << temp << ' '<<i << '\n';
				break;
			}
			temp *= 3;
			v.push_back(temp);
		}
		// cerr << temp << '\n';
		if (flag) cout << "NO\n";
		else {
			cout << "YES\n";
			for (auto i:v) {
				if (i == v.back()) cout << i;
				else cout << i << ' ';
			}
			cout << '\n';
		}
	}

	return 0;
}