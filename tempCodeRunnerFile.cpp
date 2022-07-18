#include<bits/stdc++.h>
using namespace std;
void printF(vector<int>a){
    int n=a.size();
    for(int i=0;i<n;i++){
        cout<<a[i];
    }
}
void sec(int i,int *arr,vector<int>a,int n){
    if(i>=n){
        printF(a);
        return;
    }
    a.push_back(arr[i]);
    sec(i+1,arr,a,n);
    a.pop_back();
    sec(i+1,arr,a,n);
}
int main(){
    int arr[]={3,1,2};
    vector<int>a;
    int n=3;
    sec(0,arr,a,n);
}