#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k,x=0;
        cin>>n>>k;
        string s;
        cin>>s;
        for(int i=0;i<n/2;i++){

            if(s[i]!=s[n-i+1])
            {
                x++;
            }
        }
        if(x==k)
            cout<<0;
        else if(x>k)
            cout<<x-k;
        else if(x<k)
            cout<<k-x;
    }
    return 0;
}