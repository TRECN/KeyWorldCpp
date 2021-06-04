#include<iostream>
using namespace std;
int main(){
    int t,a,b,Xa,Xb;
    cin>>t;
    while(t--){
        cin>>a>>b>>Xa>>Xb;
        cout<<(Xa/a)+(Xb/b)<<endl;
    }
    return 0;
}