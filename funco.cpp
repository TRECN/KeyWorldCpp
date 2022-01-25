#include<iostream>
using namespace std;

class A{
    public:
    int sum(int a){
        return a+a;
    }
    int sum(int a, int b){
        return a+b;
    }
    double sum(double a,double b){
        return a+b;
    }
    
};


int main(){
    A obj;
    cout<<obj.sum(25)<<endl;
    cout<<obj.sum(3,10)<<endl;
    cout<<obj.sum(3.6,3.5);
    return 0;
}