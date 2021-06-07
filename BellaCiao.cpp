/*
3
2 1 1 1
3 2 1 1
5 2 1 2
*/
#include <bits/stdc++.h>
using namespace std;
int main(){
    long long t,D,d,P,Q;
    cin>>t;
    while(t--){
        
        cin>>D>>d>>P>>Q;
        long long n=D/d;
        long long m=0;
        if(n%2==0){
            m+=d*(n/2*(2*P+(n-1)*Q));
           
        }
        else {
            m+=d*(n*(P+(n-1)/2)*Q);
            
        }
        m+=(D%d)*(P+n*Q);

        cout<<m<<endl;
        
    }
    return 0;

}
