#include <bits/stdc++.h>
using namespace std;

int main() {
 int t, n, x;
 cin >> t;
 while(t--) {
     cin >> n >> x;
     string ans1 = "", ans2 = "";
     if(x == 1) {
         for(int i = 0; i < n; i += 2) {
             ans1 += "a";
             if(i + 1 < n) ans1 += "a";
         }
         cout << ans1 << endl;
     }else if(n % 2 == 0 && x > (n / 2)){
         cout << "-1" << endl;
     }else if(n % 2 == 1 && x > (n / 2)+1){
         cout << "-1" << endl;
     }else {
         int k = 0;
         for(int i = 0; i < n; i += 2) {
             ans1 += ('a'+(k%x));
             if(i + 1 < n) {
                 ans2 += ('a'+(k%x));
             }
             k++;
         }
         reverse(ans2.begin(), ans2.end());
         cout << ans1+""+ans2 << endl;
     }
 }
 return 0;
}


/*WA by me
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

        int r = a/2;
        int rr = r;
        if (a&1) rr++;

        if (b>rr || rr > 26) cout << "-1\n";
        else {
            string st = "";
            char ch = 'a';
            int inc = 0;
            for (int i=0; i<r; i++) {

                inc %= b;
                st += 'a'+inc;
                inc++;

            }
            string st2 = st;
            if (a&1) st+= 'a';
            
            reverse(st2.begin(), st2.end());
            cout << st + st2 << '\n';
            
        }
    }

    return 0;
}*/