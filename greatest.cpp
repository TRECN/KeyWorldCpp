#include<iostream>
using namespace std;
int main(){
    cout<<"enter two numbers"<<endl;
    int a,b,c;
    cin>>a>>b;
    c=a;
    a=b;
    b=c;
    cout<<"swaped element"<<endl<<a<<endl<<b;
}