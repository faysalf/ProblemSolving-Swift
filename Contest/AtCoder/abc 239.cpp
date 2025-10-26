// //a

// #include <bits/stdc++.h>
// using namespace std;

// int32_t main() {
// 	ios_base::sync_with_stdio(0);
// 	cin.tie(0);

// 	int h; long double res; cin >> h;

// 	res = (long double) pow(h*(12800000 + h),-2);
// 	cout << fixed << setprecision(9) << res << '\n';

// 	return 0;
// }


// //B
// #include <bits/stdc++.h>
// using namespace std;

// int32_t main() {
// 	ios_base::sync_with_stdio(0);
// 	cin.tie(0);

// 	long double x; cin >> x;

// 	x = x / 10;
// 	if (x < 0) {
// 		if (x < llround(x)) cout << llround(x) - 1 << '\n';
// 		else cout << llround(x) << '\n';
// 	}
// 	else cout << (long long)(x) << '\n';
// 	return 0;
// }

// c

#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int32_t main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int a,b,c,d; cin >> a >> b >> c >> d;

	long double res = pow((2-a), 2) + pow((1-b), 2);
	long double r2 = pow((2-c), 2) + pow((1-d), 2);

	if (res == 5 && r2==5) cout << "Yes\n";
	else cout << "No\n";
	cerr << res << '\n';

	return 0;
}