#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,ub,data;
    cout<<"enter the size of array";
    cin>>n;
    int a[n];
    cout<<"enter the elements you want to enter";
    cin>>ub;
    
    for(int i=0;i<ub;i++){
        cin<<a[ub];
    }

    if(ub==n)
        cout<<"ourflow!!";
    else{
        
        cout<<"Enter the data to insert:";
        cin>>data;
        ub+=1;
        a[ub]=data;
    }
    int ud=n;
    cout<<"enter the element to insert: ";
    n++;
    return 0;
}