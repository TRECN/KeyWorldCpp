#include<iostream>
using namespace std;
int sum(int a, int b){
    return a+b;
}
int sum(int a){
    return a+a;
}
int main(){
    cout<<sum(25)<<endl;
    cout<<sum(3,10);
    return 0;
}