#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k=0,i;
    bool c=false;
    cout<<"enter the length of array: ";
    cin>>n;
    int a[n];
    cout<<"enter the elements: ";
    for(i=0;i<n;i++)
        cin>>a[i];

    cout<<"enter the element to be searched: ";
    cin>>k;

    //searching
    for(i=0;i<n;i++){
        if(k==a[i]){
            c=true;
            break;
        }
    }
    if(c)
        cout<<k<<" found at index "<<i;
    else
        cout<<k<<" not found";
    
    return 0;
}
