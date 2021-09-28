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
    for (int i=0;i<m;i++){
        for(int j=n-1;j>=n;j--){
                ld+=a[i][j];
        }
    }
    cout<<"sum: "<<ud;

}