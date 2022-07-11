#include<bits/stdc++.h>
using namespace std;

//2 pointer
void fun(int *arr,int l,int r){
    if(l>=r)
        return;
    arr[l]=arr[l]+arr[r];
    arr[r]=arr[l]-arr[r];
    arr[l]=arr[l]-arr[r];
    fun(arr,l+1,r-1);
}

//1 pointer
void fun1(int *arr, int i,int n){
    if(i>=n/2)
        return;
    arr[i]=arr[i]+arr[n-i-1];
    arr[n-i-1]=arr[i]-arr[n-i-1];
    arr[i]=arr[i]-arr[n-i-1];
    fun1(arr,i+1,n);
}
int main(){
    int arr[]={1,2,3,4};
    fun(arr,0,3);
    fun1(arr,0,4);
    for(int i=0;i<4;i++){
        cout<<arr[i];
    }
}