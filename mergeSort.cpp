#include<bits/stdc++.h>
using namespace std;



void mergeSort(int arr[],int l,int r){
    if (l<r){
        int mid=(l+r)/2;
        mergeSort(arr,l,mid);
        mergeSort(arr,mid+1,r);

        merge(arr,l,mid,r);
    }
}


int main(){
    int arr[]={5,6,3,2,4};
    mergeSort(arr,0,4);
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}