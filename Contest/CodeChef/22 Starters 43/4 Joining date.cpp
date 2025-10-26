#include <bits/stdc++.h>
using namespace std;
int firststep(int first,int second){
    int res;
    int po=first/5;
    if(first%5==0){
        po--;
    }
    int pq=second/5;
    if(second%5==0){
        pq--;
    }
    res =po-pq;
    return res;
}

int main() {
	long long takeinput;
	cin>>takeinput;
	while(takeinput--){
	    long long first;
	    long long second;
	    cin>>first>>second;
	  
	    cout<<firststep(first,second)<<endl;
	}
	return 0;
}
