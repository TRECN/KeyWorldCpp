#include<bits/stdc++.h>
using namespace std;
int main(){
    cout<<"enter a no. between 1-7 to show week days."<<endl;
    int n;
    cin>>n;
    switch(n){
        
        case 3:
            cout<<"wednesday";
        break;
        case 4:
            cout<<"thursday";
        break;
        case 5:
            cout<<"friday";
        break;
        case 6:
            cout<<"saturday";
        break;
        case 7:
            cout<<"sunday";
        break;
        dafault:
            cout<<"wrong choice!!";
    }
    return 0;
}