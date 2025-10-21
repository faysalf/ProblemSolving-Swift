//find maximum distance k we should swap that need min operation to sort the array

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

        int attack = 0;
        vector<int>v(n);
        for (auto &i:v) {
            cin >> i;
            attack += i;
        }
        int point = 0, defence = 0;
        sort(v.begin(), v.end());
        
        for (int i=0; i<n; i++) {
            attack -= v[i];
            defence += 1000-v[i];
            point = max(point, attack*defence);
        }
        cout << point << '\n';
    }
    return 0;
}