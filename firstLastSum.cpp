#include<iostream>
using namespace std;
int main(){
    int t,n,a;
    cin>>t;
    while(t--){
        cin>>n;
        a=n;
        while(a>9){
            a=a/10;
        }
        cout<<a+(n%10)<<endl;
    }
    return 0;
}