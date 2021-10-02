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
        if(a==b&&b==c&&c==d){
            count=3;
        }
        else{
            if((d-a+b+c)<0){
                c++;
            }

        }
        cout<<count;
        
        
    }
    
    return 0;
}