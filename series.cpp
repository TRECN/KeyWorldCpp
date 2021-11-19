#include<iostream>
using namespace std;
int main(){
    float sum=0,f=0;;
    for(int i=1;i<=2;i++){
        f=1/i;
        if(i%2==0)
            sum=sum-f;
        else
            sum=sum+f;
    }
    cout<<"sum: "<<sum;
return 0;
}