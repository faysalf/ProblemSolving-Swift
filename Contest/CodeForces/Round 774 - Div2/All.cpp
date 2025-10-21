//a
#include <bits/stdc++.h>
using namespace std;

int32_t main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t; cin >> t;
	while (t--) {
		long long n, s; cin >> n >> s;
		long long pw = pow(n,2);
		cout << (s/pw) << '\n';
	}

	return 0;
}

/*//B - AC = Both AC - 1st 78ms only

#include <bits/stdc++.h>
using namespace std;

int32_t main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t, n, v; cin >> t;
	while (t--) {
		cin >> n;
		vector <long long> arr(n);
		for (int i=0; i<n; i++) {
			cin >> arr[i]; 
		}
		sort(arr.begin(), arr.end());
		if ((n==3 && arr[0]+arr[1] >= arr[2])) cout << "NO\n";
		else {
			long long bSum = arr[0]+arr[1], rSum = arr[n-1];
			int bCount = 2, rCount = 1, i=2, j=n-2;
			
			bool flag = false;
			while (i < j) {
				if (bSum < rSum && rCount < bCount) {
					flag = true;
					break;
				}
				bSum += arr[i];
				rSum += arr[j];

				i++; bCount++; j--; rCount++;
			}
			if (bSum < rSum && rCount < bCount) flag = true;	//cause last one wasn't check for l<r; l==r hole change hobe huge
			
			if (flag) cout << "YES\n";
			else cout << "NO\n";
		}
	}

	return 0;
}


#include <bits/stdc++.h>
using namespace std;

int32_t main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t, n, v; cin >> t;
	while (t--) {
		cin >> n;
		vector <long long> arr(n);
		for (int i=0; i<n; i++) {
			cin >> arr[i]; 
		}
		sort(arr.begin(), arr.end());
		
			long long bSum = arr[0], rSum = 0;
			int i=1, j=n-1;
			bool flag = false;
			cerr << bSum <<' '<<rSum<< '\n';
			while (i < j) {

				bSum += arr[i];
				rSum += arr[j];
				cerr << arr[i] << ' '<< arr[j] << '\n';
				if (bSum < rSum) {
					flag = true;
					cerr << bSum << ' ' << rSum;
					break;
				}
				i++; j--;
			}
			if (flag) cout << "YES\n";
			else cout << "NO\n";
	
	}

	return 0;
}*/


/* C incomplete
#include <bits/stdc++.h>
using namespace std;

int32_t main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t, sum; cin >> t;
	long long m, n, pw, fac = 1;

	map <long long> mp;
	while (t--) {
		cin >> n;
		m = n;
		for (int i=1; i<n; i++) {
			pw = pow(2,i);
			fac *= i;
			if (fac > n && pw > n) break;

			else if (fac <= n && mp[fac]==0) {
				sum += fac;
			}
			else if (pw <=n && mp[pw]==0) {
				sum += pw;
			}
		}
	}

	return 0;
}*/