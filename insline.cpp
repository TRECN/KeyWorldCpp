#include<iostream>
using namespace std;

inline int Sum(int a,int b){
    return a+b;
}
int main(){
    cout<<Sum(2,8)<<endl;
    cout<<Sum(5,10);
    return 0;
}