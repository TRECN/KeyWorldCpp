#include<iostream>
#include<cstdlib>
using namespace std;

int maximumDiff(int *a,int n){
    int maxi=abs(a[0]-a[1]);
    for(int i=0,j=1;i<n-1;i++,j++){
        if(abs(a[i]-a[j])>maxi){
            maxi=abs(a[i]-a[j]);
        }
    }
    return maxi;
}

int main(){
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        cout<<maximumDiff(a,n)<<endl;
    }
    return 0;
}