#include<bits/stdc++.h>
using namespace std;

void merge(int arr[],int l,int mid, int r){
    int n1=mid-l+1;
    int n2=r-mid;

    
    int i=0;
    int j=0;
    int k=l;
    while(i<n1&&j<n2){
        if(a[i]<=b[j]){
            arr[k]=a[i];
            i++;
        }
        else{
            arr[k]=b[j];
            j++;
        }
        k++;

    }
    while(i<n1){
        arr[k]=a[i];
            k++;i++;
    }
    while(j<n2){
        arr[k]=b[j];
        k++;j++;
    }
}

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