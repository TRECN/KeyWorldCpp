#include<bits/stdc++.h>
using namespace std;

uint32_t numSetBits(uint32_t A){
    uint32_t rev=0;
    int mask;
    while(A!=0){
        if((A&1)==0){
            mask=~(1);
            rev=rev&mask;
        }

    return rev;
}

int main(){
    cout<<numSetBits(3);
    return 0;
}