#include <bits/stdc++.h>
using namespace std;
int main(){
    int t,D,d,P,p1,Q,i,j,m;
    cin>>t;
    while(t--){
        
        cin>>D>>d>>P>>Q;
        p1=P;
        m=0;
        i=0;
        j=0;

        while(D--){ 
            if(i==d){
                j++;
                =P+(j*Q);
                i=0;
            } 
            m=m+p1;
            i++;
            
        }

        cout<<m<<endl;
        
    }
    return 0;

}
