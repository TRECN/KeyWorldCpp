#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,sum=0;
    cout<<"enter the length of array: "<<endl;
    cin>>n;

    int *arr=new int[n];
    cout<<"enter element of the array: "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    cout<<"sum: "<<sum;

    return 0;
}