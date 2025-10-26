#include <bits/stdc++.h>
using namespace std;

int32_t main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		string s; cin >> s;

		int zero = 0, one = 0;
		for (int i=0; i<n; i++) {
			if (s[i] == '0') zero++;
			else one++;
		}
		if (n == 1) {
			cout << "YES\n";
		}
		else if (n==2 && ((s[0]=='1' && s[1]=='0') || (s[0]=='0' && s[1]=='1'))) {
			cout << "YES\n";
		}
		else {
			cout << "NO\n";
		}
	}


	return 0;
}