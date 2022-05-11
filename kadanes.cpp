#include<bits/stdc++.h>
using namespace std;
int kadane(int a[],int n){
    int maxSum=INT_MIN;
    int currSum=0;
    for(int i=0;i<n;i++){
        currSum=currSum+a[i];
        if(currSum>maxSum)
            maxSum=currSum;
        if(currSum<0){
            currSum=0;
        }
    }
    return maxSum;
}
int main(){
    int a[]={-8,-2,6,-5,10,3,-3,10};
    int n=sizeof(a)/sizeof(a[0]);
    cout<<kadane(a,n);
    return 0;
}