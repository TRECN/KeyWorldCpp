#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n,k;
    cin>>t;
    while(t-->0){
        cin>>n>>k;
        int c=0;
        k--;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int f = sizeof(a) / sizeof(a[0]);
        sort(a, a + f, greater<int>());
