#include<iostream>
using namespace std;

int firstocc(int arr[],int n,int i,int key){
    
    if(i==n){
        return -1;
    }
    
    if(arr[i]==key)
        return i;
    
    return firstocc(arr,n,i+1,key);
}

int lastocc(int arr[],int n,int key){
    
    if(n==-1){
        return -1;
    }
    
    if(arr[n-1]==key){
        return n-1;
    }
    return lastocc(arr,n-1,key);
}

int main(){

    int arr[]={2,0,1,0,5,8,2};
    cout<<firstocc(arr,7,0,2)<<endl;
    cout<<lastocc(arr,7,2)<<endl;
    return 0;
}