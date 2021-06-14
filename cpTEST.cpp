#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>a;
    int g;
    do{
        cin>>g;
        a.push_back(g);
    }while(g!=42);
    cin>>g;
    a.push_back(g);
    int i=0;
    while(a.at(i)!=42)
        cout<<a.at(i++)<<endl;
    return 0;
}