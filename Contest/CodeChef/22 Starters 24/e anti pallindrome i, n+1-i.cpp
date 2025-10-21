#include <iostream>
#include<bits/stdc++.h>
using namespace std;

bool check(unordered_map<char,int>&map,int n)
{
    for(auto it:map)
    {
        if(it.second>n/2)return true;
    }
    return false;
}

void stringshift(string&s,int n,unordered_map<char,int>&map)
{
    sort(s.begin(),s.end());
    int l=1;
    for(int i=0;i<s.size()/2;i++)
    {
        if(s[i]==s[s.size()-i-1])
        {
            swap(s[i],s[s.size()-l++]);
        }
    }
    cout<<s<<endl;
    
    
}

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    string s;
	    cin>>s;
	    if(n%2)cout<<"NO"<<endl;
	    else{
	        unordered_map<char,int>map;
	        for(auto c:s)map[c]++;
	        if(check(map,n))
	        {
	            cout<<"NO"<<endl;
	        }
	        else
	        {
	            //stringshift(s,n,map);
	            cout<<"YES"<<endl;
	            stringshift(s,n,map);
	        }
	    }
	}
	return 0;
}




/* ///WA
#include <bits/stdc++.h>
using namespace std;

int32_t main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		string s; cin >> s;
		string ss = s;
		//sort(s.begin(), s.end());
		if ((n&1) == 1) {
			cout << "NO\n";
		}
		else {

		}
		
	}

	return 0;
}
*/