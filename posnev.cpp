#include<bits/stdc++.h>
using namespace std;
int main(){
     int n,k=0,m=0,i;
    bool c=false;
    cout<<"enter the length of array: ";
    cin>>n;
    int a[n];
    cout<<"enter the elements: ";
    for(i=0;i<n;i++)
        cin>>a[i];

    for(i=0;i<n;i++){
        if(a[i]<0)
            k++;
        else
            m++;
    }
    cout<<"number of +ve elements: "<<m<<endl;
    cout<<"number of -ve elements: "<<k;

    return 0;
}