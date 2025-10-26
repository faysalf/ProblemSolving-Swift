// A
// #include <bits/stdc++.h>
// using namespace std;

// int32_t main() {
// 	ios_base::sync_with_stdio(0);
// 	cin.tie(0);

// 	int n; cin >> n;

// 	while (n--) {
// 		char r,g,b,R,G,B;
// 		string s; cin >> s;
// 		for (int i=0; i<6; i++) {
// 			if (s[i]=='r') r = i;
// 			if (s[i]=='g') g = i;
// 			if (s[i]=='b') b = i;
// 			if (s[i]=='R') R = i;
// 			if (s[i]=='G') G = i;
// 			if (s[i]=='B') B = i;
// 		}
// 		if (r<R && b<B && g<G) cout << "YES\n";
// 		else cout << "NO\n";
// 	}

// 	return 0;
// }


// B
#include <bits/stdc++.h>
using namespace std;

int32_t main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		int flag = n, r = n;
		while (r--) {
			cout << flag << ' ';
			for (int i=n; i>=1; i--) {
				if (i==flag) continue;
				else cout << i << ' ';
			}
			flag--;
			cout << '\n';
		}
	}

	return 0;
}