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
        int n, k, r, c; cin >> n >> k >> r >> c;
        r--; c--;

        for (int i=0; i<n; i++) {
            for (int j=0; j<n; j++) {
                cout << ".X"[((i+j -r-c) % k == 0)]; //er maddhome condition thik rekhe neighbor sajay
            }
            cout << '\n';
        }
    }

    return 0;
}

























// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long

// int32_t main() {
//     #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
//     #endif
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);

//     int t; cin >> t;

//     while (t--) {
        
//         int n, k, r, c, cnt = 0; cin >> n >> k >> r >> c;
//         vector<string> v(n, string(n, '.'));
        
//         v[r-1][c-1] = 'X';

//         int m = n/k;

//         int f = 0;
        
//         map<int, bool> col, row;
//         col[c-1] = 1;
//         row[r-1] = 1;

//         if (r%k != 0) {
//             for (int i=r; i<=r+k; i++) {
//                 if (i%k==0) break;
//                 else col[i-1] = 1;
//             }
//             for (int i=r-1; i>=0; i--) {
//                 if (i%k==0) break;
//                 else col[i-1] = 1;
//             }
//         }

//         int plus = 0;
//         for (int i=0; i<n; i++) {
//             for (int j=0; j<n; j+=k) {
//                 bool flag = 0;

//                 //v[r][c] er jonyo range
//                 if (i==r-1) {
//                     bool flag = 1;
//                     for (int l=j; l<j+k; l++) {
//                         if (v[r-1][l] == 'X') flag = 0;
//                     }
//                     if (flag) {
//                         v[i][j+plus] = 'X';
//                         col[j+plus] = 1;
//                         row[i] = 1;
                        
//                     }
//                 }
//                 else {
//                     bool flag = 1;
//                     for (int z=j; z<j+plus; z++) {
//                         if (!col[z]) {
//                             v[i][z] = 'X';
//                             col[z] = 1;
//                             row[i] = 1;
//                             flag = 0;
//                         }
//                     }
//                     if (flag) {
//                         if (j+plus == c-1 && j+plus+1 < n) {
//                             v[i][j+plus+1] = 'X';
//                             col[j+plus+1] = 1;
//                             row[i] = 1;
//                         }
//                         else {
//                             if ((j+plus+1) % k == 0) {
//                                 v[i][j] = 'X';   //----
//                                 col[j] = 1;
//                                 row[i] = 1;
//                             }
//                             else {
//                                 v[i][j+plus] = 'X';   //----
//                                 col[j+plus] = 1;
//                                 row[i] = 1;
//                             }
//                         }
//                     }
//                 }
                
//             }
//             plus++;
//             if ((i+1)%k==0 && i!=0) plus = 0;
//         }

//         for (int i=0; i<n; i++) {

//             for (int j=0; j<n; j++) {
//                 if (!(row[i]) && !(col[j])) {
//                     v[i][j] = 'X';
//                     row[i] = 1;
//                     col[j] = 1;
//                 }
//                 else if (!(col[j]) && i==n-1) {
//                     v[i][j] = 'X';
//                     row[i] = 1;
//                     col[j] = 1;
//                 }
//             }
//             if (!(row[i])) v[i][n-1] = 'X';
//         }
//         if (k==1) {
//             for (int i=0; i<n; i++) {
//                 for (int j=0; j<n; j++) {
//                     cout << 'X';
//                 }
//                 cout << '\n';
//             }
//         }
//         else {
//             for (int i=0; i<n; i++) {
//                 cout << v[i] << '\n';
//             }
//         }

//     }    

// return 0;
// }