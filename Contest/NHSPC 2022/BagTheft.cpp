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
    
    int t; cin >> t;
    while (t--) {
        string time; cin >> time;

        int hh = (time[0]-48)*10 + (time[1] -48); 
        int mm = (time[2]-48)*10 + (time[3] - 48); cerr << hh << ' '<< mm << '\n';
        int total = (hh-9) * 60 + mm; 

        int people = (total/5 * 8) - (total/15) * 8;
        cout << people << '\n';
    }

    return 0;
}