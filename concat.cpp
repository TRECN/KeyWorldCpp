#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,n1,n2,lb=0,i,j,k;
    cout<<"enter the size of the array a and b: "<<endl;
    cin>>n>>n1;
    int a[n],b[n1];
    cout<<"enter the elements of the array a: "<<endl;
    for(int i=0;i<n;i++){   
            cin>>a[i];
    }
    cout<<"enter the elements of the array b: "<<endl;
    for(int i=0;i<n1;i++){   
            cin>>b[i];
    }
    n2=n+n1;
    int c[n2];
    i=0;j=0;k=0;
    while(i<n){
        c[k]=a[i];
        i++;k++;
    }
    while(j<n1){
        c[k]=b[j];
        j++;k++;
    }
  
}