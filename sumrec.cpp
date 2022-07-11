#include<bits/stdc++.h>
using namespace std;
// parameterised
void fun(int i,int n){
    if(n<1)
    {
        cout<<i;
        return;
    }
    fun(i+n,n-1);
}
// functional
int fun1(int n){
    if(n<1){
        return 0;
    }
    return n+fun1(n-1);
}

int main(){
    int n=3;
    int sum=0;
    fun(sum,n);
    cout<<endl<<fun1(n);
}