#include<iostream>
using namespace std;
int main(){
    int n,f=1;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++)
            f=f*j;

        cout<<"Factorial of "<<i<<" = "<<f<<endl;
        f=1;
    }
}