//A

// #include <bits/stdc++.h>
// using namespace std;

// int32_t main() {
// 	ios_base::sync_with_stdio(0);
// 	cin.tie(0);

// 	int t; cin >> t;
// 	while (t--) {
// 		int n, x; cin >> n >> x;
// 		int sample = 0;
// 		for (int i=1; i<=n; i++) {
// 			int f; cin >> f;
// 			if (f < x) sample = i;
// 		}
// 		cout << sample << '\n';
// 	}

// 	return 0;
// }

// B

// #include <bits/stdc++.h>
// using namespace std;

// int32_t main() {
// 	ios_base::sync_with_stdio(0);
// 	cin.tie(0);

// 	int t; cin >> t;
// 	while (t--) {
// 		int n; cin >> n;
// 		string s; cin >> s;
// 		int i = 0, count = 0;
// 		while (i < s.size()) {
// 			if (s[i]==s[i+1]) {
				
// 				i += 2;
// 			}
// 			else i++;
// 			count++;
// 		}
// 		cout << count << '\n';
// 	}

// 	return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;

// int32_t main() {
// 	ios_base::sync_with_stdio(0);
// 	cin.tie(0);

// 	int t; cin >> t;
// 	while (t--) {
// 		int n; cin >> n;
// 		vector <long long> v(n);
// 		long long mx = 0, m=0, mn = 1e9, mnp = 0, p= 0;
// 		for (int i=0; i<n; i++) {
// 			cin >> v[i];

// 			if ((i&2)==1 && v[i]>=0) {
// 				if (v[mx] < v[i]) mx = i;
// 			}
// 			else if ((i&2)==0 && v[i] < 0) {
// 				if (v[mx] < abs(v[i])) mx = i;
// 			}
// 		}
// 		if ((mx&2)==0 && v[mx] < 0) {
// 			for (int i=1; i<n; i+=2) {
// 				if (v[i] > 0 && v[i] > mnp) {
// 					mnp = v[i]; p = i;
// 				}
// 				else if ((mn > abs(v[i]))) {
// 						mn = v[i]; m = i;
// 				}
// 			}
// 		}
// 		else if ((mx&2)==1 && v[mx]>0) {
// 			mnp = 1e9;
// 			for (int i=0; i<n; i+=2) {
// 				if (v[i] < mn && v[i]<0) {
// 					m = i; mn = v[i];
// 				}
// 				else mnp = min(mnp, v[i]);
// 			}
// 		}
// 		long long mnn = 0, sum = 0;
// 		if ((mx&2)==0) mnn = m;
// 		else mnn = p;

// 		sum += abs(v[mx]) + abs(v[mnn]);
// 		for (int i=0; i<n; i++) {
// 			if ((i != mnn) && (i != mx)) {
// 				if ((i&2)==0) sum += v[i];
// 				else sum += (-v[i]);
// 			}
// 		}
// 		cout << sum << '\n';

// 	}

// 	return 0;
// }




#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		vector <int> v(n);

		// int odmx = 0, omi=1, evmn = 1e9, eni=0,
		// evmx = 0, exi=0, odmn = 1e9, oni=1;

		int sum = 0, evp = 0, en=1e9+2, op=0, on=1e9+2;
		for (int i=0; i<n; i++) {
			cin >> v[i];

			if ((i%2)==0) {
				evp = max(evp, v[i]);
				on = min(on, v[i]);
			}
			else {
				if (op < abs(v[i])) op = v[i];
				en = min(en, v[i]);
			}

			if ((i&2)==0) sum += v[i];
			else sum -= v[i];
		}
		int sumE = sum - (evp*2) - (en*2), sumO = sum + (op*2) + (on*2);

		cout << max(abs(sum), max(abs(sumE), abs(sumO))) << '\n';
		cerr << sum << ' '<< sumE << ' '<< sumO << ' '<<evp << ' '<< en << ' ' << op << ' '<<on<<'\n';

	}		

	return 0;
}