#include<bits/stdc++.h>
using namespace std;
int f(int n){
    long long s=0;
    for(int i=1;i<=n;i++){
        s+=n%i;
    }
    return s;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long l,r;
    cin>>l>>r;
    long long n=l,sum=0;
    while(n>=l&&n<=r){
        if(f(n)==f(n-1))
            sum+=n;
        n++;
    }
    cout<<sum;
}