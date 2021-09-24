#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,c=0,i=0;
    cout<<"enter the size of the array: "<<endl;
    cin>>n;
    int a[n];
    cout<<"enter the elements of the array: "<<endl;
    for(i=0;i<n;i++){   
            cin>>a[i];
    }
    for( i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(a[i]==a[j])
                c++;
        }
        if(c>1)
            break;
        else
            c=0;
    }
    
    cout<<a[i]<<" has occured '"<<c<<"' times.";
    return 0;
}