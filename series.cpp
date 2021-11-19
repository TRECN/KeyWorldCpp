#include<iostream>
using namespace std;
int main(){
    float sum;
    for(int i=1;i<=100;i++){
        if(i%2==0)
            sum=sum-(1/i);
        else
            sum=sum+(1/i);
    }
}