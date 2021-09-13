#include<iostream>
using namespace std;
int sum(int a, int b){
    return a+b;
}
double sum(int a,double b){
    return a+b;
}
int main(){
    cout<<sum(2,5)<<endl;
    cout<<sum(3,4.5);
    return 0;
}