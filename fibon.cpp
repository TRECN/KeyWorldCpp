#include<bits/stdc++.h>
using namespace std;

int fib(int n){
    if(n<=1)
        return n;

    return fib(n-1)+fib(n-2);
}
//01123
int main(){
    cout<<fib(5);
    return 0;

}