#include<iostream>
using namespace std;

void Sum(int *a){
    *a=20; 
}
int main(){
    int a;
    a=10;
    cout<<"before calling the function, value of a: "<<a<<endl;
    Sum(&a);
    cout<<"after calling the function, value of a: "<<a;
    return 0;
}