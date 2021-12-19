#include<bits/stdc++.h>
using namespace std;

int numSetBits( int A){
    int count=0;
    int d=A&1;
    while((A&1)==0){
        count++;
        A=A>>1;
        
    }
    return count;
}

int main(){
    cout<<numSetBits(8);
    return 0;
}