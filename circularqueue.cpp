#include<bits/stdc++.h>
using namespace std;

void insertion(char *q,int n,int *front,int *rear){
    if((*front==0&&*rear==n-1)||(*front==*rear+1)){
        cout<<"queue is overflow";
    }
    else{
        cout<<"enter data: "<<endl;
        char data;
        cin>>data;
        if(*front==-1){
            *front=0;
            *rear=0;
        }
        else
            *rear=*rear+1;

        q[rear]=data;

    }
}


int main(){
    int n;
    cout<<"enter the size for queue"<<endl;
    cin>>n;
    char q[n];
    int front=-1;
    int rear=-1;
    int ch=1;

}