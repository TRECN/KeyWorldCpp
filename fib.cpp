//write a program to generate n number of terms of fibonacci series using arry
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"enter the number of elements in fibonacci series: ";
    cin>>n;
    int a[n];
    a[0]=0;
    a[1]=1;
    for(int i=2;i<n;i++){
        a[i]=a[i-1]+a[i-2];
    }
    return 0;
}
