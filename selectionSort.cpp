#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for (int i=0;i<n;i++){
        cin>>a[i];
    }

    for(int i=0;i<n-1;i++){
        int min=i;
        for(int j=i+1;j<n;j++){
            if(a[j]<a[min]){
                min=j;
            }
            
        }
        int t=a[i];
            a[i]=a[min];
            a[min]=t;
        
        for(int k=0;k<n;k++){
        cout<<a[k]<<" ";
    }
    cout<<endl;
    }
    
        
    return 0;
}