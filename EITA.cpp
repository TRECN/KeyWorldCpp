#include<bits/stdc++.h>
using namespace std;
int main(){
    int d,x,y,z;
    int t;
    cin>>t;
    while(t--){
        cin>>d>>x>>y>>z;
        int a=x*7;
        int b=y*d+z*(7-d);
        if(b>a){
            cout<<b<<endl;
        }
        else{
            cout<<a<<endl;
        }
    }
}