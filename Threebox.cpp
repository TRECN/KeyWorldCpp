#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--)
    {   
        int count=1;
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        if((a+b+c)==3*d){
            count=3;
        }
        cout<<count;
        
        
    }
    
    return 0;
}