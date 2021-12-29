#include<bits/stdc++.h>
using namespace std;
void push(int *arr,int *top,int n){
    int data;
    if(*top==n-1)
        cout<<"overflow!!"<<endl;
    else{
        cout<<"enter element: "<<endl;
        cin>>data;
        *top=*top+1;
        arr[*top]=data;
    }
}

void pop(int *arr,int *top,int n){
    int data;
    if(*top<0)
        cout<<"underflow!!"<<endl;
    else{
        arr[*top]=NULL;
        *top=*top-1;
    }
}


void show(int *arr,int *top,int n){
    for(int i=0;i<=*top;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    
        cout<<"enter choice: 1. push, 2. pop, 3. show, 0 to quit"<<endl;
        cin>>ch;
        switch (ch)
        {
        case 0:
            break;
        case 1:
            push(arr,&top,n);
            break;
        case 2:
            pop(arr,&top,n);
            break;
        case 3:
            show(arr,&top,n);
            break;
        
        default:
        cout<<"wrong choice!! enter choice again: "<<endl;
            break;
        }
    }
    return 0;
}