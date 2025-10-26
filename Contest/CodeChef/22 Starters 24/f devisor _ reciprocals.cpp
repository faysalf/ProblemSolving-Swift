#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int tt=1;cin>>tt;
    while(tt--)
    {
        ll x,a,b;cin>>x>>a>>b;
        if(x%a==0)
        {
            ll p=x/a;
            ll den=b*p;
            ll sum=0;
            for(int i=1;i<=sqrtl(den);i++)
            {
                if(sum>x)
                break;
                if(den%i==0)
                {
                    sum=sum+i;
                    if(den/i!=i)
                    sum=sum+den/i;
                }
            }
            if(sum!=x)
            {
                cout<<-1<<"\n";
            }
            else
            cout<<den<<"\n";
        }
        else
        cout<<-1<<"\n";
    }
}