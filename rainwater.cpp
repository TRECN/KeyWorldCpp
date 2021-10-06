#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int l=0;//0
    int r=n-1;//8
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];//1 5 3 6 3 4 2 1 6 
    } 
    int lm=a[0];//1
    int rm=a[n-1];//6
    int rain=0;
    while(l<r){
        if(lm<rm){
            l++;
            lm=(lm>a[l])?lm:a[l];    
            rain+=lm-a[l];   
        }
        else{
            r--;
            rm=(rm>a[r])?rm:a[r];
            rain+=rm-a[r];   
        }
    }
    cout<<rain;
    return 0;
}