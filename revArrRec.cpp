#include<bits/stdc++.h>
using namespace std;


void fun(int *arr,int l,int r){
    if(l>=r)
        return;
    arr[l]=arr[l]+arr[r];
    arr[r]=arr[l]-arr[r];
    arr[l]=arr[l]-arr[r];
    fun(arr,l+1,r-1);
}
int main(){
    int arr[]={1,2,3,4};
    fun(arr,0,3);    
    for(int i=0;i<4;i++){
        cout<<arr[i];
    }
}