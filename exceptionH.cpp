#include<bits/stdc++.h>
using namespace std;
int main(){
    
    try{
        if(b==0)
            throw b;
        else if(a/b==0)
            throw (float)a/b;
        else
            cout<<a/b;
    }
    catch(int d){
        cout<<"dividing by 0\n";
    }
    catch(float d){
        cout<<d;
    }
}