#include<iostream>
using namespace std;
int main(){
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        int a[n];
        for(int k=0;k<n;k++){
            cin>>a[k];
        }
        int i=0;
        while(i<n-1){
            if((a[i]%2)!=(a[i+1]%2)){
                int t=a[i];
                a[i]=a[i+1];
                a[i+1]=t;
                
            }
            i++;
        }
        for(int k=0;k<n;k++){
            cout<<a[k]<<" ";
        }
        cout<<endl;
    }
    return 0;
}