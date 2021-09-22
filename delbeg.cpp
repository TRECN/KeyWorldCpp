//at the begin
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,ub,data,lb=0;
    cout<<"enter the size of array: "<<endl;
    cin>>n;
    int a[n];
    cout<<"enter the elements you want to enter: "<<endl;
    cin>>ub;
    cout<<"enter elements: ";
    ub=ub-1;
    if(n==0)
        cout<<"Underflow!!";
    else{
        for(int i=0;i<=ub;i++){   
            cin>>a[i];
        }
        int x=lb;
        while(x<ub){
            a[x]=a[x+1];
            x++;
        }
        ub=ub-1;
    }
    cout<<"array after insertion: "<<endl;
    for(int i=0;i<=ub;i++){
        cout<<a[i]<<endl;
    }
    return 0;
}