#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,max=0,min=0,i;
    cout<<"enter the length of array: ";
    cin>>n;
    int a[n];
    cout<<"enter the elements: ";
    for(i=0;i<n;i++)
        cin>>a[i];
    
    for(i=0;i<n;i++){
        if(a[i]>a[max])
            max=i;
        if(a[i]<a[min])
            min=i;
    }
    cout<<"maximim element at index : "<<max<<endl;
    cout<<"minimum element at index : "<<min;
    return 0;
}