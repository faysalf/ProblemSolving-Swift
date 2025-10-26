#include <bits/stdc++.h>
using namespace std;

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int t; 
  cin>>t; 
  while(t--) {
    int n; 
    cin>>n; 

    int b=1;
    while(b*2<n) b=b*2;

    for(int i=b-1;i>=0;--i) {
      cout<<i<<" ";
    }

    for(int i=b;i<n;++i) {
      cout<<i<<" ";
    } 
    cout<<'\n'; 
  }
  
  return 0;
}