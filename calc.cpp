#include<iostream>
using namespace std;
int main(){

    char ch;
    double a,b;
    cout<<"enter operator : ";
    cin>>ch;

    cout<<"Enter numbers: ";
    cin>>a>>b;
    switch(ch){
        case '+':
            cout<<a<<" + "<<b<<" = "<<(a+b);
            break;

        case '-':
            cout<<a<<" - "<<b<<" = "<<(a-b);
            break;

        case '*':
            cout<<a<<" * "<<b<<" = "<<(a*b);
            break;

        case '/':
            cout<<a<<" / "<<b<<" = "<<(a/b);
            break;

        default:
            cout<<"Enter a correct Operation!!";
            break;

    }

    return 0;
}