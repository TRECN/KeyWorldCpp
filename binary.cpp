#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    bool c=false;
    cout<<"enter the length of array: ";
    cin>>n;
    int begin=0,end=n-1,el,mid,i;
    
    int a[n];
    cout<<"enter the elements: "<<endl;
    for(i=0;i<n;i++)
        cin>>a[i];
    cout<<"enter the search element: "<<endl;
    cin>>el;
    while(begin<=end){
 
        else if (a[mid] < el)
            begin = mid + 1;
        else
            end = mid - 1;
    }
    if(c==true){

        cout<<"found at index "<<mid;
    }
    else
        cout<<"not found";
    return 0;
}