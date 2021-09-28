#include<bits/stdc++.h>
using namespace std;
int main(){
    int m,n,ud,ld=0;
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
    cout<<"sum: "<<ud;

}