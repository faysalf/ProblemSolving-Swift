#include <bits/stdc++.h>
using namespace std;

int main() {
	
	int t; cin >> t;

	while ( t--){
		int n; cin >> n;

		if ( n % 2== 0) cout << "Bangla\n";
		else if ( n == 1971) cout << "Joy Bangla\n";
		else if (n % 2 == 1) cout << "Joy\n";
	}
	
	return 0 ;
}