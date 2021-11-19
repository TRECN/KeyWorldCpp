#include<iostream>
using namespace std;
int main(){
    float sum=0,f=0;;
    for(int i=1;i<=100;i++){
        if(i%2==0)
            sum-=(float)1/i;
        else
            sum+=(float)1/i;
    }
    cout<<"sum: "<<sum;
return 0;
}