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
        int x=d;
        x=x-a;
        if(x>=(b+c)){
            x-=b;
            if(x>=c)
                count=1;
            else
                count=2;
        }
        else{
            if(x<b)
                count=3;
            else if(x>=b)
                count=2;

        }
        
        cout<<count<<endl;
    }
    
    return 0;
}