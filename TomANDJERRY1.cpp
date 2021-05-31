#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t,a,b,c,d,k,j;
    cin>>t;
    while(t--){
        cin>>a>>b>>c>>d>>k;
        int j=abs(a-c)+abs(b-d);
        if(j==k){
            cout<<"YES"<<endl;
        }
        else{
            int i=k-j;
            if(i%2!=0){
                cout<<"NO"<<endl;
            }
            else if(j>k)
                cout<<"NO"<<endl;
            else
                cout<<"YES"<<endl;
        }
    }
    return 0;
}