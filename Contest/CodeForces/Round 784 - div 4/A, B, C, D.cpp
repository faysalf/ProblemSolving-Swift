//A
// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long int

// int32_t main() {
// 	ios_base::sync_with_stdio(0);
// 	cin.tie(0);

// 	int t; cin >> t;
// 	while (t--) {
// 		int n; cin >> n;
// 		if (n >= 1900) cout << "Division 1\n";
// 		else if (n >= 1600 && n <= 1899) cout << "Division 2\n";
// 		else if (n >= 1400 && n <= 1599) cout << "Division 3\n";
// 		else cout << "Division 4\n";
// 	}

// 	return 0;
// }


//B
// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long int

// int32_t main() {
// 	ios_base::sync_with_stdio(0);
// 	cin.tie(0);

// 	int t; cin >> t;
// 	while (t--) {
// 		int n; cin >> n;
// 		map<int, int> m;
		
// 		for (int i=0; i<n; i++) {
// 			int f; cin >> f;
// 			m[f]++;
// 		}
// 		bool flag = 0;
// 		for (auto [a,b]:m) {
// 			if (b>=3) {
// 				cout << a << '\n';
// 				flag = 1;
// 				break;
// 			}
// 		}
// 		if (!flag) cout << "-1\n";
// 	}

// 	return 0;
// }


//C
// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long int

// int32_t main() {
// 	ios_base::sync_with_stdio(0);
// 	cin.tie(0);

// 	int t; cin >> t;
// 	while (t--) {
// 		int n; cin >> n;
// 		int oc = 0, ec = 0;
// 		map<int,int> ev, od;

// 		for (int i=0; i<n; i++) {
// 			int f; cin >> f;
// 			if (i%2==0) {
// 				if (f%2==0) {
// 					if (ev[2]==0) {
// 						ev[2]=1; ec++;
// 					}
// 				}
// 				else {
// 					if (ev[1]==0) {ev[1] = 1; ec++;}
// 				}
// 			}
// 			else {
// 				if (f%2==0) {
// 					if (od[2]==0) { od[2]=1; oc++;}
// 				}
// 				else {
// 					if (od[1]==0) {od[1] = 1; oc++;}
// 				}
// 			}
// 		}
// 		if (!(oc == 2 || ec == 2)) cout << "YES\n";
// 		else cout << "NO\n";

// 	}

// 	return 0;
// }


//D

#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve() {

    ll n, b=0, r=0, res = 0;
    cin>>n;
 
    string a; cin>>a;

    for(int i=0; i<n; i++) {
        if(a[i]=='R') r++;
 
        else if(a[i]=='B') b++;
        
        else {
            if((b==0 && r!=0) || (b!=0 && r==0)) {
                res=-1;
            }
            b=0,r=0;
        }
    } 
    if((b==0 && r!=0) || (b!=0 && r==0)) {
        res=-1;
    }
    if(res==-1) cout<<"NO\n";
    
    else cout<<"YES\n";
}


int32_t main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t; cin >> t;
	while (t--) {
		solve();
	}

	return 0;
}