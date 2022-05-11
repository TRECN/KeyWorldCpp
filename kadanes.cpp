#include<bits/stdc++.h>
using namespace std;
int kadanes(int a[]){
    int maxSum=INT_MIN;
    int curSum=0;
    for(int i=0;i<5;i++){
        curSum = curSum+a[i];
        if(curSum>maxSum){
            maxSum=curSum;
        }
        if(curSum<0){
            curSum=0;
        }
        
    }
    return maxSum;
}
int main(){
    int a[]={5,-4,-2,6,-1};
    cout<<kadanes(a);
    return 0;
}