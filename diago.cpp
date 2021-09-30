/*
1  2  3  4
1  2  3  4
1  2  3  4
1  2  3  4
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    
    int m,n,ud=0,ld=0;
    cout<<"enter the no. of rows and column: "<<endl;
    cin>>m>>n;
    cout<<"enter the elements of the array: "<<endl;
    int a[m][n];
    int n1=n;
    for (int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    for (int i=0;i<m;i++){
        for(int j=0;j<n1-1;j++){
            ud+=a[i][j];
        }
        n1--;

    }


    cout<<"sum of ud elements : "<<ud<<endl;
    cout<<"sum of ld elements : "<<ld<<endl;
}