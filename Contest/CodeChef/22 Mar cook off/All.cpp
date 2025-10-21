/*A
#include <bits/stdc++.h>
using namespace std;

int32_t main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t; cin >>t;
	while(t--) {
		int x, y; cin >> x >> y;
		if (((x+y)&1)==0) cout << "Janmansh\n";
		else cout << "Jay\n";
	}

	return 0;
}*/

/*B
#include <bits/stdc++.h>
using namespace std;

int32_t main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t; cin >> t;
	while (t--) {
		int x, a, b, c; cin >> x >> a >>b >> c;

		int mn1 = min({a,b,c});
		int mn2 = 0;
		if (b == mn1) mn2 = min(a,c);
		else if (a==mn1) mn2 = min(b,c);
		else mn2 = min(a,b);

		int count = 0;
		if (x > 1) count = mn2;
		count += (x-1) * mn1;

		cout << count << '\n';
	}

	return 0;
}*/

/*C
#include <bits/stdc++.h>
using namespace std;

int32_t main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t; cin >> t;
	while (t--) {
		int n, a, res = 0; cin >> n;

		for (int i=0; i<n; i++) {
			cin >> a;
			if (a==0) res += 1;
		}
		cout << max(res, n-res) << '\n';
	}
	return 0;
}
*/
/* D
#include <bits/stdc++.h>
using namespace std;

int32_t main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t; cin >> t;
	while (t--) {
		int n; cin>> n;
		if (n==1) cout << 1 << '\n';
		else {
			int inc = 1;
			for (int i=1; i<n; i+=2) {
				cout << inc << ' '<< inc*2 << ' ';
				inc += 2;
			}
		if ((n%2)==1) cout << inc*2-1;
		cout << '\n';
		}
	}

	return 0;
}
*/

/*C - WA
#include <bits/stdc++.h>
using namespace std;

int32_t main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		int scn = (n%2==0)? n-1: n;
		// if ((n&1)==0)
		if (n==1) cout << 1 << '\n';
		else {
			int co = 2;
			map <int, int> mp;
			cout << 1 << ' '<< scn << ' ';
			for (int i=2; i<n; i++) {
				if (co == n || co == n-1) { cout << '\n'; break;}
				if (mp[i] == 0) {
					int fs = 2;
					if (mp[i*fs] == 0) {
						cout << i << ' '<< i*fs << ' ';
						mp[i] = 1; mp[i*fs] = 1;
						co += 2;
					}
					else {
						while (mp[i*fs] != 0) fs++;
						cout << i << ' '<< i * fs << ' ';
						mp[i] = 1; mp[i*fs] = 1;
						co += 2;
					}

				}
				// else {
				// 	int fs = 2;
				// 	while (mp[i] != 0 && mp[i*fs] != 0) fs++;
				// }
			}
			if (n%2==1 && n>1) cout << n*2 - 2;
		}
	}

	return 0;
}*/


/*#include <bits/stdc++.h>
using namespace std;

#define ll long long int

ll count_subarray(vector<ll> &v,ll x,ll n){
    ll r=0;
    ll mex = 0;
    vector<ll> cnt(n+1,0);

    while(r<n && mex<x){
        cnt[v[r]]++;
        r++;
        while(cnt[mex]) mex++;
    }
    if(mex < x) return 0;

    ll ans = n-r+1;

    for(ll i=1;i<n;i++){
        cnt[v[i-1]]--;

        if(v[i-1] < x && cnt[v[i-1]]==0){

            while(r<n && cnt[v[i-1]]==0){
                cnt[v[r]]++;
                r++;
            }
        }

        if(v[i-1] < x && cnt[v[i-1]]==0) break;
        ans+=n-r+1;
    }
    return ans;
}

int main()
{
    ll t;cin>>t;
    while(t--){
        ll n,k;cin>>n;
        vector<ll> v(n);

        for(ll i=0;i<n;i++)
            cin>>v[i];

        ll left = 0, right = n, ans=0;
        ll mx = n*(n+1)/2; //total number of items in a array b..

        while(left <= right){
            ll mid = (left + right)/2;
            ll val = mx-k+1;

            if(count_subarray(v,mid,n) >= val){
                ans = mid;
                left = mid+1;
            }
            else
                right = mid-1;
        }

        cout<<ans/2<<endl;
    }

    return 0;
}*/