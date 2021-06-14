#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int s=0,r=0;
        while(n!=0){
            r=n%10;
            s=s*10+r;
            n=n/10;
        }
        cout<<s<<endl;
    }
    return 0;
}