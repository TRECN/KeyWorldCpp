#include<bits/stdc++.h>
using namespace std;

void subar(int n){
    int dd=1,c=0;
    for(int i=1;i<=n;i++){
        for(int j=i;j<=n;j++){
            for(int k=i;k<=j;k++){
                if(k=1)
                    dd=k;
                else
                    dd=dd&k;
            }
            if(dd>0)
                c++;
        }
    }
    cout<<c<<endl;
}

int main(){

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        subar(n);
    }
    return 0;
}