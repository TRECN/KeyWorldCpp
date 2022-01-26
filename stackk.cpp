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
    int n;
    cout<<"enter the size of stack: "<<endl;
    cin>>n;
    int arr[n];
    int top=-1;
    int ch=1;
    while(ch>0){
        cout<<"enter choice: 1. push, 2. pop, 3. show, 0 to quit"<<endl;
  
    }
    return 0;
}