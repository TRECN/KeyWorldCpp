#include<iostream>
using namespace std;

int search(int a[],int n,int k){
    for(int i=0;i<n;i++){
        if(k==a[i]){
            return 1;
        }
    }
    return 0;
}

int main(){
    int t,n,k,j;
    cin>>t;
    while(t--){
        cin>>n>>k;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        if(search(a,n,k))
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }
    return 0;
}