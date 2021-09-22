#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"enter the size of the array a: "<<endl;
    cin>>n;
    int a[n];
    cout<<"enter the elements of the array: "<<endl;
    for(int i=0;i<n;i++){   
            cin>>a[i];
    }
    if(n%2==0){
        for (int i=0;i<n; i+=2){
            a[i]+=a[i+1];
            a[i+1]=a[i]-a[i+1];
            a[i]=a[i]-a[i+1];
        }
    }
    else{
        for (int i=0;i<n-1; i+=2){
            a[i]+=a[i+1];
            a[i+1]=a[i]-a[i+1];
            a[i]=a[i]-a[i+1];
        }
    }
    cout<<"array after swap: ";
    for(int i=0;i<n;i++){
        cout<<a[i]<<endl;
    }
}