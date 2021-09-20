#include<iostream>
using namespace std;
int main(){
    int n,r,s=0,t;
    cout<<"enter a number: ";
    cin>>n;
    t=n;
    while(n>0){
        r=n%10;
        s=(s*10)+r;
        n=n/10;
    }
    if(t==n)
        cout<<"Palindrome";
    else
        cout<<"not Plindrome";
    return 0;
}