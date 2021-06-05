/*
3
2 1 1 1
3 2 1 1
5 2 1 2
*/
#include <bits/stdc++.h>
using namespace std;
int main(){
    int t,D,d,P,Q,j,m,r;
    cin>>t;
    while(t--){
        
        cin>>D>>d>>P>>Q;
        r=P;
        m=0;
        j=0;

        while(D--){ 
            if(D%d==0){
                r=P+(j*Q);
                j++;
            } 
            m=m+r;   
        }

        cout<<m<<endl;
        
    }
    return 0;

}
