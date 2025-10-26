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
    
    int arr[31];

    arr[0]=1;
    arr[1]=0;
    arr[2]=3;
    arr[3]=0;

    for(int i = 4; i < 31; i++) {
        arr[i] = arr[i-2] * 4 - arr[i-4];
    }

    int n;

    while(cin >> n) {

        cout << arr[n] << endl;
    }

    return 0;
}