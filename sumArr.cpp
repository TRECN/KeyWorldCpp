#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        fir(int i=0;i<n;i++) cin>>a[i];
        Solution ob;
        cout<<ob.getSum(a,n)<<endl;
    }
    return 0;
}