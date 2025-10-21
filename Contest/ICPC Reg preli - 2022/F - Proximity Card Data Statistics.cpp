#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define SetBit(x, k) (x |= (1LL << k))
#define ClearBit(x, k) (x &= ~(1LL << k))
#define CheckBit(x, k) ((x>>k)&1)
#define pi           acos(-1)

int32_t main() {

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int m = 3, n = 3, o = 3;

    if (m==n==o) cerr << "OK\n";
    
    map<string, string> time, bth, bld;
    map<string, bool> email;

    int t; cin >> t;

    for (int i=1; i<=t; i++) {
        
        string ti, em, bi, bl; cin >> ti >> em >> bi >> bl;

        if (email[em]) {
            if (ti > time[em]) {
                time[em] = ti;
                bth[em] = bi;
                bld[em] = bl;
            }

        } else {
            time[em] = ti;
            bth[em] = bi;
            bld[em] = bl;
            email[em] = true;
        }

    }
    //cerr << bth.size();

    map<string, int> blood, birth;


    for (auto [a, b]: email) {
        
        if (b) {
            //cerr << a << '\n';
            string c, d; //cin >> a >> b >> c >> d; //scanf("%s %s %s %s", a, b, c, d);
            c = bth[a];
            d = bld[a];

            //cerr << c <<' '<< d << '\n';

            string year = "";
            year += c[6];
            year += c[7];
            year += c[8];
            year += c[9];

            blood[d]++;
            birth[year]++;
        }

    }

    blood["A+"];
    blood["A-"];
    blood["AB+"];
    blood["AB-"];
    blood["B+"];
    blood["B-"];
    blood["O+"];
    blood["O-"];

    for (auto [a, b]:blood) {
        cout << a << ' '<< b << '\n'; //printf("%s %d\n", a, b);
    }
    for (auto [a, b]:birth) {
        cout << a << ' '<< b << '\n'; //printf("%s %d\n", a, b);
    }

    return 0;
}
