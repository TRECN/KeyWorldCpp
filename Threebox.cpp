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
        else
        if(s<=3*d)
            count=3;
        cout<<count;
        
        
    }
    
    return 0;
}