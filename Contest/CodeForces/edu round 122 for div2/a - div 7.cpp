#include<bits/stdc++.h>
using namespace std;
 
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t; cin >> t;
  while (t--) {
    int n; cin >> n;
    if (n % 7 == 0) {
      cout << n << '\n';
    }
    else {
      n -= n % 10;			//bad - 10 20 100 200 cause leading 0
      while (n % 7 != 0) ++n;
      cout << n << '\n';
    }
  }
  return 0;
}







/*
#include <bits/stdc++.h>
using namespace std;

int32_t main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t; cin >> t;

	while (t--) {
		int n; cin >> n;
			int nn = n / 7;
			int m = nn * 7;
			bool flag = false;
			string s = to_string(m);
			int len = s.size();
			if (s[0] == '0' || s[1] == '0' || s[len-1] == '0') {
				flag = true;
			}

			while (flag) {
				m -= 7;
				string s = to_string(m);
				int len = s.size();
				if (s[0] != '0' && s[1] != '0' && s[len-1] != '0') {
					flag = false;
				}

			}
			flag = true;
			int mn = nn * 7;
			while (flag) {
				mn += 7;
				string s = to_string(mn);
				int len = s.size();
				if (s[0] != '0' && s[1] != '0' && s[len-1] != '0') {
					flag = false;
				}
			}
			if (n > 99) {
				if (m > 99 && m < 1000) cout << m << '\n';
				else cout << mn << '\n';
			}
			else {
				if (m < 100 && m > 9) cout << m << '\n';
				else cout << mn << '\n';
			}
	}
	return 0;
}
*/

/*#include <bits/stdc++.h>
using namespace std;

int32_t main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t; cin >> t;
	while (t--) {
		int m; cin >> m;
		int n = m, nn = m;
		while (n%7 != 0) {
			n++;
		}
		while (nn%7 != 0) {
			nn--;
		}
		if (m >= 100) {
			if (n > 100 && n <= 999) cout << n << '\n';
			else cout << nn << '\n';
		}
		else {
			if (n < 100 && n >= 10) cout << n << '\n';
			else cout << nn << '\n';
		}
	}

	return 0;
}*/

/*
#include <bits/stdc++.h>
using namespace std;

int32_t main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n; cin >> n;
	while (n--) {
		int m; cin >> m;
		if (m > 99) {
			cout << "777" << '\n';
		}
		else {
			cout << "28" << '\n';
		}
	}

	return 0;
}
*/