#include<iostream>
#include<cstdlib>
using namespace std;
int main(){
    int n;
    cin>>n;
        int a[n];
        int l=1;
        for(int k=0;k<n;k++){
            cin>>a[k];
        }
        
        for(int i=0;i<n-l;i+=2){
            a[i]=a[i]+a[i+1];
            a[i+1]=a[i]-a[i+1];
            a[i]=a[i]-a[i+1]; 
        }
        for(int k=0;k<n;k++){
            cout<<a[k]<<" ";
        }
    return 0;
}