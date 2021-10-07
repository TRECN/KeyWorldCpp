#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int t;
    cin>>t;
    while(t--){
        long long int n,st;
        cin>>n;
        if(n==1){
            cout<<1;
            continue;
        }
        long long int temp=1;
        while(temp*2<=n){
            temp*=2;
        }
        st=n-temp+1;
        if(n==temp)
            cout<<temp/2;
        else
            cout<<max(st,temp/2);
    }
}