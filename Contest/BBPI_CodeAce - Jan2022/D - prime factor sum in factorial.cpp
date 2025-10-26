#include <bits/stdc++.h>
using namespace std;
#define ll long long int

ll fac(int n) {
    ll ft = 1;
    for (int i=2; i<=n; i++) {
        ft *= i;
    }
    return ft;
}

int32_t main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int t; cin >> t;
    while (t--) {
        ll n; cin >> n;
        n = fac(n);

        int sum = 0;
        for (int i=2; i<=n; i++) {
            if (n%i == 0) {
                while (n%i==0) {
                    sum += i;
                    n /= i;
                }
            }
        }
        cout << sum << '\n';
    }

    return 0;
}


//Customized ok
// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long int

// ll fac(int n) {
//     ll ft = 1;
//     for (int i=2; i<=n; i++) {
//         ft *= i;
//     }
//     return ft;
// }
// bool is_prime(int n) {
//     for (int i=2; i*i<=n; i++) {
//         if (n%i==0) return 0;
//     }
//     return 1;
// }
// int32_t main() {
//     #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
//     #endif
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);
    
//     int t; cin >> t;
//     while (t--) {
//         ll n; cin >> n;
//         n = fac(n);

//         int sum = 0;
//         for (int i=2; i*i<=n; i++) {
//             if (n%i == 0) {
//                 while (n%i==0) {
//                     sum += i;
//                     n /= i;
//                 }
//             }
//         }
//         if (is_prime(n)) sum += n;

//         cout << sum << '\n';
//     }

//     return 0;
// }