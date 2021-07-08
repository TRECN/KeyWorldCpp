#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int g,c,h;
        cin>>g>>c;
        h=(c*c)/(2*g);
        cout<<h<<endl;
    }
    return 0;
}