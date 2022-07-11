#include<bits/stdc++.h>
using namespace std;
bool fun(string &a,int i,int n){
    if(i>=n/2)
        return true;
    if(a[i]!=a[n-i-1])
        return false;
    return fun(a,i+1,n);
}
int main(){
    string a="maamm";
    cout<<fun(a,0,a.size());
}