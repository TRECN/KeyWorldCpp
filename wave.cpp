#include<iostream>
#include<cstdlib>
using namespace std;
int main(){
    int n;
    cin>>n;
        int a[n];
        for(int k=0;k<n;k++){
            cin>>a[k];
        }
        for(int i=0;i<n-1;i++){
            int j=a[i]%2;
            int l=a[i+1]%2;
            if(j!=l){
                int p=a[i];
                a[i]=a[i+1];
                a[i+1]=p;
            }
        }
        for(int k=0;k<n;k++){
            cout<<a[k]<<" ";
        }
    return 0;
}