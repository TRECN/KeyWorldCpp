#include<iostream>
using namespace std;
int main(){

    int a=10;
    int*ptr=&a;
    int **q=&ptr;
    cout<<a<<endl;
    cout<<++*ptr<<endl;
    cout<<++ptr<<endl;
    cout<<**ptr<<endl;
    
    return 0;
}