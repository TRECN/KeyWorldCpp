#include<bits/stdc++.h>
using namespace std;

void subar(int n){
    long long int s=1,e=n,r=0,bi=1,count=0,max=1;
    while(s<=e){
        r=s;
        bi=r;
        while(r<=e){
            bi=bi&r;
            r++;
            count++;
        }
        if(bi>0&&count>max){
            max=count;
        }
        count=0;
        if(s==e){
            s++;
            e=n;
        }
        else{
            e--;
        }
    }
    cout<<max<<endl;
}

int main(){

    long long int t;
    cin>>t;
    while(t--){
        long long int n;
        cin>>n;
        subar(n);
    }
    return 0;
}
