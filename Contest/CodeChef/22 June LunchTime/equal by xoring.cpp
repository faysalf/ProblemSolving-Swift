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
        int a, b, n; cin >> a >> b >> n;

        vector<bool>v(30);
        if (a<b) {
            for (int i=0; i<=30; i++) {
                if (a>>i & 1) v[i] = 1;
                else v[i] = 0;
            }
            int cnt = 0;
            bool flag = 1;
            for (int i=0; i<=30; i++) {
                if (b>>i & 1) {
                    if (v[i]==0) {
                        if (i<n) cnt++;
                        else {
                            flag = 0;
                            break;
                        }
                    }
                }
            }
            if (flag) cout << cnt << '\n';
            else cout << "-1\n";
        }
        else if (a>b) {
            for (int i=0; i<=30; i++) {
                if (b>>i & 1) v[i] = 1;
                else v[i] = 0;
            }
            int cnt = 0;
            bool flag = 1;
            for (int i=0; i<=30; i++) {
                if (a>>i & 1) {
                    if (v[i]==0) {
                        if (i<n) cnt++;
                        else {
                            flag = 0;
                            break;
                        }
                    }
                }
            }
            if (flag) cout << cnt << '\n';
            else cout << "-1\n";
        }
        else cout << "0\n";
        
    }
    return 0;
}



/*//AC
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int countBits(int x1){
    return (int)log2(x1)+1;
}
int isPowerofTwo(int n)
{
   if(n==0)
   return 0;
 
   return (ceil(log2(n)) == floor(log2(n)));
}
int main() {
    // your code goes here
    int t;
    cin>>t;
    while(t--){
        long long a,b,n;
        cin>>a>>b>>n;
        int s=a^b;
        
        if(a==b){
            cout<<"0"<<endl;
        }
        else if(s<n){
            cout<<1<<endl;
        }
        else{
            int d= countBits(s);
            int l=countBits(n);
            if(d==l){
                if(isPowerofTwo(n)){
                cout<<"-1"<<endl;
            }
                else{
                cout<<2<<endl;
                }
            }
            else{
                cout<<"-1"<<endl;
            }
        }
    
    }
    return 0;
}
*/
