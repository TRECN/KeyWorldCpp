#include<iostream>
using namespace std;
int main(){
    int t,n,s=0;
    cin>>t;
    while(t--){
        cin>>n;
        while(n>0){
            s+=n%10;
            n/=10;
        }
        cout<<s<<endl;
        s=0;
    }
    return 0;
}