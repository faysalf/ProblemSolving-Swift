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
    	
    	map<string, bool>m;
    	vector<string>v(n);
    	for (int i=0; i<n; i++) {
    		cin >> v[i];
    		m[v[i]] = 1;
    	}
    	string res = "";
    	for (int i=0; i<n; i++) {
    		int sz = v[i].size();
    		string fs = "", ss = "";

    		bool one = 0;
    		for (int j=0; j<sz; j++) {
    			fs += v[i][j];
    			ss = "";
    			for (int k=j+1; k<sz; k++) {
    				ss += v[i][k];
    			}
    			if (m[fs] && m[ss]) {
    				one = 1;
    				break;
    			}
    		}
    		cout << one;
    	}
    	cout << '\n';
    }

    return 0;
}
