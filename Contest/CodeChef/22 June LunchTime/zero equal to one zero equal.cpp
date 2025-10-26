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
        if(n%2== 0){
            cout<<"1";
            for(int i=1;i<n-1;i++){
                cout<<"0";
            }
            cout<<"1"<<'\n';
        }   
        else{
            for(int i=0; i<n; i++){
                if(i%2==0){
                    cout<<"0";
                }
                else{
                    cout<<"1";
                }
            }cout<<'\n';
        }
    }

    return 0;
}
