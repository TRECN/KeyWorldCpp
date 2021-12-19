#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int s=0;
        vector<int>vec(n);
        for(int i=0;i<n;i++){
            cin>>vec[i];
        }
        sort(vec.begin(),vec.end());
        int h=n;
        while(k--){
            s=vec[n--];
        }
        cout<<s<<endl;

    }
}