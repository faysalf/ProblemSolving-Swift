// C - Bracket sequence and deletion - WA - below AC answers
// #include <bits/stdc++.h>
// using namespace std;

// int32_t main() {
// 	ios_base::sync_with_stdio(0);
// 	cin.tie(0);

// 	int t; cin >> t;
// 	while (t--) {
// 		int n;
// 		string s; cin >> n >> s;

// 		string cps = s;
// 		reverse(cps.begin(), cps.end());
// 		if (s == cps) cout << "1 0\n";

// 		else {
// 			int count = 0;
// 			vector<char> st;

// 			bool flag = true;
// 			for (int f=0; f<st.size(); f++) {
// 				char i = s[f];
// 				if (i=='(') {
// 					if (st[f-1] == ')') {
// 						count++;
// 						st.erase(st.begin()+f-1, st.begin()+f);
// 					}
// 					else st.push_back(i);
// 				}
// 				else if (st.size() && i==')' && st.back()=='(') {
// 					st.pop_back(); count++;
// 				}
// 				if (!st.empty()) {
// 					int sz = st.size();
// 					for (int k=0; k<sz; k++) {
// 						bool flag = false;
// 						for (int i = sz/2, j = sz/2 +1; i>=0, j<sz; i--, j++) {
// 							if (st[i] == st[j]) {
// 								st.erase(st.begin()+i, st.begin()+j);
// 								count++;
// 							}
// 							else {
// 								flag = true;
// 								break;
// 							}
// 						}
// 						if (flag) break;
// 					}
// 				}
// 			}
// 			cout << count << ' '<<st.size() << '\n';
// 		}

// 	}

// 	return 0;
// }

#include <bits/stdc++.h>
using namespace std;

const int N = 500500;
char s[N];
int n;
 
void solve() {
  cin >> n >> s;
  int ans = 0;
  int p = 0;

  while (p + 2 <= n) {
    if (s[p] == '(') {
      ans++;
      p += 2;
    }
    else {
      int q = p;
      p++;
      while (p < n && s[p] == '(') p++;
      if (p == n) {
        p = q;
        break;
      }
      p++;
      ans++;
    }
  }
  cout << ans <<' '<< n - p << '\n';
}
 
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int t;
  cin >> t;
  while(t--) {
    solve();
  }
 
  return 0;
}

// AC too
// #include<bits/stdc++.h>
// using namespace std;
// typedef long long ll;
// typedef long double ld;
// int32_t main() {
//     #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
//     #endif
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);
    
//     int tst;
//     cin >> tst;
//     while (tst--) {
//         string s;
//         cin >> s;
//         int needA = s.size() / 2;
//         int needB = s.size() / 2;
//         for (int i = 0; i < s.size(); i++) {
//             if (s[i] == '(') needA--;
//             if (s[i] == ')') needB--;
//         }
//         if (needA == 0 || needB == 0) {
//             cout << "YES\n";
//         }
//         else {
//             string t = s;
//             vector<int> que;
//             int ca = needA;
//             int cb = needB;
//             for (int i = 0; i < t.size(); i++) {
//                 if (t[i] == '?') {
//                     que.emplace_back(i);
//                     if (needA > 0) {
//                         t[i] = '(';
//                         needA--;
//                     }
//                     else {
//                         t[i] = ')';
//                         needB--;
//                     }
//                 }
//             }
//             t[que[ca - 1]] = ')';
//             t[que[ca]] = '(';
//             bool ok = true;
//             int bal = 0;
//             for (char& c : t) {
//                 assert(c == '(' || c == ')');
//                 if (c == '(') bal++;
//                 else bal--;
//                 if (bal < 0) ok = false;
//             }
//             assert(bal == 0);
//             if (!ok) cout << "YES\n";
//             else cout << "NO\n";
//         }
//     }
//     return 0;
// }