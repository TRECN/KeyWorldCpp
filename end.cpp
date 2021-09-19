#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,ub,data;
    cout<<"enter the size of array: "<<endl;
    cin>>n;
    int a[n];
    cout<<"enter the elements you want to enter: "<<endl;
    cin>>ub;
    if(ub==n)
        cout<<"ourflow!!";
    else{
        for(int i=0;i<ub;i++){
            cin>>a[i];
        }
        cout<<"Enter the data to insert:";
        cin>>data;
        ub+=1;
        a[ub]=data;
    }
    cout<<"array after insertion: ";
    for(int i=0;i<=ub;i++){
        cout<<a[i]<<endl;
    }
    return 0;
}