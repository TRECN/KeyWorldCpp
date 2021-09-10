#include<iostream>
using namespace std;
int main(){
    int n, a=0,b=1,c;
    cout<<"enter the number of element: ";
    cin>>n;
    cout<<0<<" "<<1;
    for(int i=2; i<n; i++){
        c=a+b;
        cout<<" "<<c;
        a=b;
        b=c;
    }
    return 0;
}