#include<bits/stdc++.h>
using namespace std;

void subar(int n){
    int s=1,e=n,r=0,bi=1,count=0,max_count=0;
    while(s<=e){
        r=s;
        bi=r;
        count=0;
        while(r<=e){
            bi=bi&r;
            r++;
            count++;
        }
        if(bi<=0)
            count=0;
        else    
            max_count=count;
        if(s==e){
            s++;
            e=n;
        }
        else{
            e--;
        }
        
    }
    cout<<max_count;
    

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
