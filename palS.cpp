#include<bits/stdc++.h>
using namespace std;
int main(){
    string s,r;
    cout<<"enter string: ";
    cin>>s;
    r=s;
    reverse(s.begin(),s.end());

    if(s==r)
        cout<<"It's Palindrome";
    else
        cout<<"not a Palindrome";
    
    return 0;

}
