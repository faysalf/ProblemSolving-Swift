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
        int p; cin >> p;

        int sp = 0, sz = 0;
        for (auto i:s) {
            sp += i-96;
            sz++;
        }
        map<char,int>del;
        string ss = s;
        sort(ss.begin(), ss.end());
        int i = sz-1;
        while (sp > p) {
            del[ss[i]]++;
            sp -= ss[i] - 96;
            i--;
        }
        for (int i=0; i<sz; i++) {
            if (del[s[i]]) {
                del[s[i]]--;
            }
            else cout << s[i];
        }
        cout << '\n';
    }
    
    return 0;
}