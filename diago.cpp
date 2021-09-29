#include<bits/stdc++.h>
using namespace std;
int main(){
    int m,n,ud=0,ld=0;
    cout<<"enter the no. of rows and column: "<<endl;
    cin>>m>>n;
    cout<<"enter the elements of the array: "<<endl;
    int a[m][n];
    for (int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    for (int i=0;i<m;i++){
        for(int j=0;j<n-1;j++){
            ud+=a[i][j];
        }
        n--;
    }
    
    cout<<"sum of ud elements : "<<ud<<endl;
}