#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
   
    for(int i=1;i<n;i++){
        for(int j=0;j<n-i;j++){
            if(a[j]>a[j+1]){
                int t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
            
            
        }
        for(int k=0;k<n;k++){
                cout<<a[k]<<" ";
            }
            cout<<endl;
    }

  
    return 0;
}