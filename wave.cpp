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
        if(n%2!=0){
            l=2;
        }
        
        for(int k=0;k<n;k++){
            cout<<a[k]<<" ";
        }
    return 0;
}