#include<iostream>
using namespace std;

int main(){
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=n-2;i>=0;i-=2){
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}