#include <bits/stdc++.h>
using namespace std;
#define int long long int


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
    	vector<int>v(n+1), ind;
    	
    	for (int i=1; i<=n; i++) {
    		cin >> v[i];
    		if (v[i] < i) {
    			ind.push_back(i);
    		}
    	}
    	int cnt = 0;
    	for (int i=0; i<ind.size(); i++) {
    		cnt += lower_bound(ind.begin(), ind.end(), v[ind[i]]) - ind.begin();
    	}
    	cout << cnt << '\n';
    	
    }

    return 0;
}
