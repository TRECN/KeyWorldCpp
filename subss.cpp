#include<bits/stdc++.h>
using namespace std;

void subar(int n){
    int s=1,e=n,r=0,bi=1,count=0,bii=0;
    while(s<=e){
        r=s;
        while(r<=e){
            cout<<r;
            r++;
        }
        if(s==e){
            s++;
            e=n;
        }
        else{
            e--;
        }
        cout<<endl;
    }
    

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
