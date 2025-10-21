#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int32_t main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int n; cin >> n;
    while (n--) {

        int a, b; cin >> a >> b;

        bool flag = 1;
        while (a && b) {
            if (flag && a) {
                cout << 0;
                flag = 0;
                --a;
            }
            else if (!flag && b) {
                cout << 1;
                flag = 1;
                --b;
            }
            
        }
        
                for (int i=0; i<a; i++) cout << 0;
                for (int i=0; i<b; i++) cout << 1;
                cout << '\n';
    }

    return 0;
}
