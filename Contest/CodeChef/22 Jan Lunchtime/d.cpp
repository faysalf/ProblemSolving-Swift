#include <bits/stdc++.h>
using namespace std;
bool chk(long long m,string s,int k)
{
long long ans=0;
for(int i=m;i>=0;i--)
{
  long long v=((int)(s[i])-(int)('0')+ans)%10;
  if(v==0)
  continue;
    ans+=10-v;
}
return ans<=k;
}
int main() {
    // your code goes here
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        long long int ans=0;
        long long int low=0,high=n-1;
        while(low<=high)
        {
            long long mid=low+(high-low)/2;
            if(chk(mid,s,k))
            {
                ans=mid+1;
                low=mid+1;
            }
            else
            {
                high=mid-1;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}

/*Got WA
#include <bits/stdc++.h>
using namespace std;

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t; cin >> t;

    while (t--) {
        int n,k, count = 0; cin >> n >> k;
        string s; cin >> s;

        for (int i = 0; i<n; i++) {
            int r = (int) s[i] - 48;        //getting int from char
            if (r == 0) {
                count++;
                continue;
            }
            else if (k < (10-r)) {
                break;
            }
            else {
                count++;
                k -= (10-r);
            }
        }cout << count << '\n';

    }

    return 0;
}*/