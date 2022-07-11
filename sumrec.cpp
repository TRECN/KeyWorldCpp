#include<bits/stdc++.h>
using namespace std;

void fun(int i,int n){
    if(n<1)
    {
        cout<<i;
        return;
    }
    fun(i+n,n-1);
}

int main(){
    int n=10;
    int sum=0;
    fun(sum,n);
}