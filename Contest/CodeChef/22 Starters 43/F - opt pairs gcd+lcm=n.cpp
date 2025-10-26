#include<iostream>
#include<string>
using namespace std;
typedef long int li;
int main(){
    int t;
    cin>> t;
    for (int i =0;i<t;i++){
    li n;
    cin>>n;
 
    if (n==2){
        cout<<1<<endl;
        continue;
    }
    li value=0;
    if(n%2==0){
        value=1;
    }
    li k=2;
    li x=1;
    while(k*k<n){
        if(n%k==0){
            x=x+2;
        }
        k++;
    }
    if(k*k==n){
       x++; 
    }
    cout<<2*x-value<<endl;
    
    }
    return 0;
}