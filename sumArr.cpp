#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    int getSum(int a[],int n){
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=a[i];
        }
        return sum;
    }
};
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
 