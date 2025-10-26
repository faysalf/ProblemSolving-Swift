// AC solution Python 3

// for _ in range(int(input())):
//     s = input()
//     c = input()

//     flag = False
//     for i in range(0,len(s)-len(c)+1):
//         if (i%2==0 and s[i:i+len(c)] == c and (len(s) - i+len(c))%2==0):
//             flag = True
//             break
//     if (flag == True):
//         print("YES")
//     else:
//         print("NO")



#include <bits/stdc++.h>
using namespace std;

int32_t main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t; cin >> t;
	while (t--) {
		string s, c; cin >> s >> c;
		bool flag = false;
		for (int i=0; i<=s.size()-c.size()+2; i++) {
			string temp = "";
			bool fl2 = true;
			for (int j=i, fc = 0; fc<c.size(); j++, fc++) {
				if (s[j] == c[fc]) {
					temp += s[j];
				}
				else {
					fl2 = false;
					break;
				}
			}

			if (fl2 && temp == c && (i+c.size()-1)%2==0 && i%2==0) {
				cerr <<t << ' '<< i << ' '<< i+c.size()-1 << '\n';
				flag = true;
				break;
			}
		}
		if (flag) cout << "YES\n";
		else cout << "NO\n";
		
	}

	return 0;
}