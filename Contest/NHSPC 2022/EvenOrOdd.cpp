#include <bits/stdc++.h>
using namespace std;

int main() {
	
	int t, m; cin >> t;

	while(t--){
		cin >> m;

		if ( m % 2 ==0)  cout << 0 << " ";
		if ( m % 2 != 0) cout << 1 << " ";
	} cout << "\n";

	return 0 ;
}