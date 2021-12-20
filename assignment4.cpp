#include<bits/stdc++.h>
using namespace std;

void insertion(char *q,int n,int *front,int *rear,char data){
    if((*front==0&&*rear==n-1)||(*front==*rear+1)){
        cout<<"queue is overflow";
    }
    else{
        if(*front==-1){
            *front=0;
            *rear=0;
        }
        else if(*rear==n-1)
            *rear=0;
        else
            *rear=*rear+1;

        q[*rear]=data;

    }
}



