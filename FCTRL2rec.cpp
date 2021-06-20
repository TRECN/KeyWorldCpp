#include<bits/stdc++.h>
#include <boost/multiprecision/cpp_int.hpp>
using namespace boost::multiprecision;
using namespace std;

cpp_int factorial(long long n){
    if(n==0)
        return 1;
    return n*factorial(n-1);
}

int main(){

    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        cout<<factorial(n)<<endl;
    }
    return 0;

}