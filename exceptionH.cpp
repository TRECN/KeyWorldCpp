#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    try{
        if(b==0)
            throw b;
        else if(a/b==0)
            throw (float)a/b;
        else
            cout<<a/b;
    }
    
    catch(float d){
        cout<<d;
    }
}