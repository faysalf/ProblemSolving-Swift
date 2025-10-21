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
    	int n; cin >> n;
        int mat[n+1][n+1];
        for (int i=1; i<=n; i++) {
            for (int j=1; j<=n; j++) {
                char fs; cin >> fs;
                mat[i][j] = fs - '0';
            }
        }
        int cnt = 0;
        int span = n-2;
        for (int i = 1; i <= n/2;i++, span -= 2) {
            for (int j = 0; j <= max(0,span); j++) {

                int one = 0;
                int zero = 0;

                if (mat[i][i+j] == 1) one++;
                else zero++;

                if (mat[i+j][n-i+1] == 1) one++;
                else zero++;
                
                if (mat[n-i+1][n-i+1-j]==1) one++;
                else zero++;
                
                if (mat[n-i+1-j][i]==1) one++;
                else zero++;
                
                cnt += min(4-one,4-zero);
            }
        }
        cout<< cnt <<'\n';
    }

    return 0;
}
