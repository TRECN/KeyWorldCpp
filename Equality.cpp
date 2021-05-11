#include<iostream>
using namespace std;
int main(){
    
    int t,n,count=0;
    cin>>t;
    while(t--){
        cin>>n;
        
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            if(a[i]==i){
                count++;
            }
        }
        cout<<count<<endl;
        count=0;
    }
    return 0;

}