#include<iostream>
using namespace std;
int main(){
    int m=INT_MIN;
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];

    }

    for(int i=0;i<n;i++){
        m=max(m,a[i]);

        cout<<m<<endl;
    }

    return 0;
}