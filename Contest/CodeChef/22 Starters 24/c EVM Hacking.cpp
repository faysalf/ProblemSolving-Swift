#include <bits/stdc++.h>
using namespace std;

int32_t main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	
	int t; cin >> t;
	while (t--) {
		int a,b,c,p,q,r;
		cin >> a>>b>>c>>p>>q>>r;
		int mx = max(p-a,max(q-b,r-c));
		double d = (double) (p+q+r)/2;
		if (mx+a+b+c > d) {
			cout << "YES\n";
		}
		else {
			cout << "NO\n";
		}
	}
	return 0;
}