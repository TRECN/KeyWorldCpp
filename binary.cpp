#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    bool c=false;
    cout<<"enter the length of array: ";
    cin>>n;
    int begin=0,end=n-1,el,mid,i;
    
    int a[n];

        mid = begin + (end-begin)/2;
        if (a[mid] == el){
            c=true;
            break;
        }  
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