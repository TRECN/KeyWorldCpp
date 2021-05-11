#include<iostream>
using namespace std;
int main(){
    int t,n,great;
    cin>>t;
    while(t--){
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        great=a[0];
        for(int i=0;i<n;i++){
            if(a[i]>great){
                great=a[i];
            }
        }
        cout<<great<<endl;
        great=0;
    }
    return 0;
}