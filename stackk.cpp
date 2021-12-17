#include<bits/stdc++.h>
using namespace std;
void push(int *arr,int *top,int n){
    int data;
    if(*top==n-1)
        cout<<"overflow!!"<<endl;
    else{
        cout<<"enter element: "<<endl;
        cin>>data;
        *top=*top+1;
        arr[*top]=data;
    }
}

