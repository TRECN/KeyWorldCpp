#include<bits/stdc++.h>
using namespace std;
int main(){
    int m,n,ud=0,ld=0;
    cout<<"enter the no. of rows and column: "<<endl;
    cin>>m>>n;
    int a[m][n];
    for (int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    for (int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(i==j){
                ud+=a[i][j];
            }
        }
    }
    for (int i=0,j=n-1;i<m;i++,j--){
        ld+=a[i][j];
    }
    cout<<"sum of ud elements : "<<ud<<endl;
    cout<<"sum of ld elements: "<<ld;

}