#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,ub,data;
    cout<<"enter the size of array";
    cin>>n;
    int a[n];
    cout<<"enter the elements you want to enter";
    cin>>ub;
    if(ub==n)
        cout<<"ourflow!!";
    else{
        for(int i=0;i<ub;i++){
        cin<<a[ub];
        cout<<"Enter the data to insert:";
        cin>>data;
        ub+=1;
        a[ub]=data;
    }
    cout<<"array after insertion: ";
    for(int i=0;i<ub;i++){
        cout<<
    }
    return 0;
}