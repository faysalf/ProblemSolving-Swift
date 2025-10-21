#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int32_t main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int t; cin >> t;
    while (t--) {
    	int n; cin >> n;
    	ll mn = 1e10, idx;
    	for (int i=1; i<=n; i++) {
    		int m; cin >> m;
    		if (m < mn) {
    			mn = m;
    			idx = i;
    		}
    	}
    	if (!(n&1)) {
    		if (idx&1) cout << "Joe\n";		//cause pair akare jabe, !n&1
    		else cout << "Mike\n";
    	}
    	else cout << "Mike\n";
    }

    return 0;
}
