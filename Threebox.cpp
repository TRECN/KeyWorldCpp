#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--)
    {   
        int count;
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        if(a==d){
            count=3;
        }
        else{
            if((a+b+c)<d){
                count=1;
            }
        }
        cout<<count;
        
        
    }
    
    return 0;
}