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
//for multiplication
int fun2(int n){
    if(n==0){
        return 1;
    }
    return n*fun2(n-1);
}

// f(3)=3*2

// f(2)=2*1
// f(1)=1*1;

int main(){
    int n=4;
    int sum=0;
    cout<<fun2(3);

}