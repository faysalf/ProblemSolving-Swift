#include <bits/stdc++.h>
using namespace std;

int main() {
	
	int n; cin >> n;
	int ttl = 0;
	for (int i = 1; i < n ; ++i) {
		if (n % i == 0) ttl++;
	}
	if (ttl >= 2) cout << "Well done\n";
	if (ttl < 2) cout << "Never give up\n";
	return 0 ;
}