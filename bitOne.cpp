#include<bits/stdc++.h>
using namespace std;

int numSetBits(unsigned int A){
    int count=0;
    
    while(A!=0){
        A=A&(A-1);
        count++;     
    }
    return count;
}

