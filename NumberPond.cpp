#include<iostream>
using namespace std;

void oddPond(int *a, int n){
    int mid=((n+1)/2)-1;
    int j=0,k=1;
    for(int i=0;i<n;i++){
        
        if(i%2==0){
            cout<<a[mid-j]<<" ";
            j++;
        }        
        else{
            cout<<a[mid+k]<<" ";
            k++;
        }   
    }       
}
void evenPond(int *a, int n){
    int mid1=(n/2)-1;
    int mid2 = ((n/2)+1)-1;
    int j=0,k=0;
    for(int i=0;i<n;i++){
        
        if(i%2==0){
            cout<<a[mid2+k]<<" ";
            k++;
            
        }        
        else{
            cout<<a[mid1-j]<<" ";
            j++;
        }   
    }  
}

    
int main(){
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }

        if(n%2==0){
            evenPond(a,n);
        }
        else{
            oddPond(a,n);
        }
        cout<<endl;
    }

    return 0;
}