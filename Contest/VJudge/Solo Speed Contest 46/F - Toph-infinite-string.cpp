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

    unordered_map<int, int>mp;
    for (int i=0; i<=102000; i++) {
        int j = i;
        if (j<=9) mp[j]++;
        else {
            while (j%10) {
                mp[j%10]++;
                j /= 10;
            }
            mp[j]++;
        }
    }

    int t; cin >> t;
    while (t--) {
        int cnt = 0;
        //int n; cin >> n;
        string s; cin >> s;
        for (int i=0; i<s.size(); i++) {
            if (mp[s[i]-48]) {
                mp[s[i]-48]--;
                cnt++;
            }
        }
        //cerr << mp[10] << '\n';
        cout << cnt << '\n';
    }

    return 0;
}