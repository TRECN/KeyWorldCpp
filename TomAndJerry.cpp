#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t,a,b,c,d,k;
    cin>>t;
    while(t--){
        cin>>a>>b>>c>>d>>k;
        while(k--){
            if(a>c){
                a--;
                continue;
            }
            if(a<c){
                a++;
                continue;
            }
            if(b>d){
                b--;
                continue;
            }
            if(b<d){
                b++;
                continue;
            }
            if(b==d){
                b--;
                continue;
            }
            if(a==c){
                a--;
                continue;
            }
            
        }
        if(a==c&&b==d)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}