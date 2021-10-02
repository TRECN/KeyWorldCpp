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
        int s=a+b+c;
        if(s<=d)
            count=1;
        else
        if(s<=d*2)
            count=2;
        cout<<count;
        
        
    }
    
    return 0;
}