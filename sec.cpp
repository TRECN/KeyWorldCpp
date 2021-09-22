#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,f,s;
    cout<<"enter the size of the array a: "<<endl;
    cin>>n;
    int a[n];
    cout<<"enter the elements of the array: "<<endl;
    for(int i=0;i<n;i++){   
            cin>>a[i];
    }
     for (int i=0;i<n; i++){
        if(a[i]>f){
            s = f;
            f = a[i];
        }
        else if (a[i] > s&& a[i] != f)
            s = a[i];
    }
    cout<<"second largest element: "<<s;
}