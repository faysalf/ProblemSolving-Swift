
//B
// #include <bits/stdc++.h>
// using namespace std;

// int32_t main() {
// 	ios_base::sync_with_stdio(0);
// 	cin.tie(0);

// 	int t; cin >> t;
// 	while(t--) {
// 		int n, x; cin >> n >> x;
// 		int mx = x, res = x;
// 		for (int i=0; i<n; i++) {
// 			int y; cin >> y;
// 			if (y < 0) res -= abs(y);
// 			else {
// 				res += y;
// 				if (mx < res) mx = res;
// 			}
// 		}
// 		cout << mx << '\n';
// 	}

// 	return 0;
// }


//a
// #include <bits/stdc++.h>
// using namespace std;

// int32_t main() {
// 	ios_base::sync_with_stdio(0);
// 	cin.tie(0);

// 	int t; cin >> t;
// 	while (t--) {
// 		int n; cin >> n;
// 		cout << n*10 << '\n';
// 	}

// 	return 0;
// }


//C
// for t in range(int(input())):
//     n = int(input())
//     li = list(map(int,input().split()))
//     if (sum(li)%2 == 0):
//         print("YES")
//     else:
//         print("NO")


//D
// for t in range(int(input())):
//     n, x, y = map(int,input().split())

//     res = 1e5
//     if (n > 100):
//         bus = n//100
//         r = n%100
//         car = r//4
//         if (r%4): car += 1
//         if (bus * x + car*y) < res:
//             res = bus * x + car*y

//     fs = n//100
//     if (n%100): fs+=1
//     if (fs * x) < res: res = fs*x

//     sf = n//4
//     if (n%4): sf+=1
//     if (sf*y) < res: res = sf*y

//     print(res)

