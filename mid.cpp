//at the givin pos
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,ub,data,pos;
    cout<<"enter the size of array: "<<endl;
    cin>>n;
    int a[n];
    cout<<"enter the elements you want to enter: "<<endl;
    cin>>ub;
    ub=ub-1;
    if(ub==n)
        cout<<"ourflow!!";
    else{
        for(int i=0;i<=ub;i++){   
            cin>>a[i];
        }
        int k=ub;
        cout<<"enter the position at whichyou want to insert: ";
        cin>>pos;
        cout<<"Enter the data to insert:";
        cin>>data;
        ub=ub+1;
        while(k>=pos){
            a[k+1]=a[k];
            k--;
        }

        a[pos]=data;
    }
    cout<<"array after insertion: "<<endl;
    for(int i=0;i<=ub;i++){
        cout<<a[i]<<endl;
    }
    return 0;
}