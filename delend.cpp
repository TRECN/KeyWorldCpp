//at the end
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,ub,data;
    cout<<"enter the size of array: "<<endl;
    cin>>n;
    int a[n];
    cout<<"enter the elements you want to enter: "<<endl;
    cin>>ub;
    ub=ub-1;
    if(n==0)
        cout<<"Underflow!!";
    else{
        for(int i=0;i<=ub;i++){   
            cin>>a[i];
        }
        a[ub]=NULL;
        ub=ub-1;
    }
    cout<<"array after insertion: ";
    for(int i=0;i<=ub;i++){
        cout<<a[i]<<endl;
    }
    return 0;
}