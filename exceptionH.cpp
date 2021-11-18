#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    try{
        if(b==0)
            throw b;
        
    }
    catch(int d){
        cout<<"dividing by 0\n";
    }
    catch(float d){
        cout<<d;
    }
}