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
        string s; cin >> s;
        int cnt = 0, c = 0;
        map<char,int> m;

        for (int i=0; i<s.size(); i++) {
            if (c<3) {
                if (!m[s[i]]) {
                    c++;
                    m[s[i]] = 1;
                }
            }
            else if (c==3) {
                if (!m[s[i]]) {
                    cnt++;
                    c = 1;
                    m.clear();
                    m[s[i]] = 1;
                }
            } 
        }
        
        cout << cnt+1 << '\n';
    }
    
    return 0;
}