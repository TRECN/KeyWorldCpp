#include<iostream>
using namespace std;

int sum(int *a,int n){
        int sum=0;
    for(int i=0;i<n;i++)
        sum+=a[i];
    return sum;
}
int main(){
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        
        cout<<sum(a,n)<<endl;
    }
    return 0;
}