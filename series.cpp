#include<iostream>
using namespace std;
int main(){
    float sum=0;
    for(int i=1;i<=2;i++){
        if(i%2==0)
            sum=sum-(1/i);
        else
            sum=sum+(1/i);
    }
    cout<<"sum: "<<sum;
return 0;
}