#include<iostream>
#include<cstdlib>
using namespace std;

int minimumDiff(int *a,int n){
    int min=abs(a[0]-a[1]);
    for(int i=0,j=1;i<n-1;i++,j++){
        if(abs(a[i]-a[j])<min){
            min=abs(a[i]-a[j]);
        }
    }
    return min;
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
        cout<<minimumDiff(a,n)<<endl;
    }
    return 0;
}