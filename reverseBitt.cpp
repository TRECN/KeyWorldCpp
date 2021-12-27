#include<bits/stdc++.h>
using namespace std;

uint32_t numSetBits(uint32_t A){
    uint32_t rev=0;
    int mask;
    while(A!=0){
        
        rev=rev<<1;
        A=A>>1;
    }
    return rev;
}

int main(){
    cout<<numSetBits(3);
    return 0;
}