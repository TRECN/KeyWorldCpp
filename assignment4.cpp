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



void deletion(char *q,int n,int *front,int *rear){
    if(*front==-1)
        cout<<"queue is underflow!!";
    else{
        if(*front==*rear){
            q[*front]=NULL;
            *front=-1;
            *rear=-1;
        }
        else if(*front==n-1){
            q[*front]=NULL;
            *front=0;
        }
        else{
            q[*front]=NULL;
            *front=*front+1;
        }
    }

}

void show(char *q,int n,int *front, int *rear){
    if(*front!=-1){
        cout<<"queue: ";
        for(int i=0;i<=n;i++){
            cout<<q[i]<<" ";
        }
    }
    else{
        cout<<"queue is empty";
    }

    cout<<endl<<"front: "<<*front<<endl<<"rear: "<<*rear<<endl;
    cout<<endl;

}

int main(){
    char q[6];
    
    
    deletion(q,6,&front,&rear);
    deletion(q,6,&front,&rear);
    show(q,6,&front,&rear);

    insertion(q,6,&front,&rear,'K');
    insertion(q,6,&front,&rear,'L');
    insertion(q,6,&front,&rear,'M');
    show(q,6,&front,&rear);

    deletion(q,6,&front,&rear);
    deletion(q,6,&front,&rear);
    show(q,6,&front,&rear);

    insertion(q,6,&front,&rear,'S');
    show(q,6,&front,&rear);

    deletion(q,6,&front,&rear);
    show(q,6,&front,&rear);

    insertion(q,6,&front,&rear,'R');
    show(q,6,&front,&rear);

    deletion(q,6,&front,&rear);
    show(q,6,&front,&rear);

}