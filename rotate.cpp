#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int o=a[n-1];
    int k=n-2;
    while(k>=0){
            a[k+1]=a[k];
            k--;
    }
    a[0]=o;
    for(int k=0;k<n;k++){
       cout<<a[k]<<" ";
    }
}