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
        if(*rear==n-1)
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
            *rear=-1'
        }
        if(*front==n-1){
            q[*front]=NULL;
            *front=0;
        }
        else{
            q[*front]=NULL;
            *front=*front+1;
        }
    }

}

void show(int *q,int *front, int *rear){
    if(*front!=-1){
        cout<<"queue: ";
        for(int i=*front;i<=*rear;i++){
            cout<<q[i]<<" ";
        }
    }
    else{
        cout<<"queue is empty";
    }

    //cout<<"front: "<<*front<<endl<<"rear: "<<*rear<<endl;
    cout<<endl;

}

int main(){
    int n;
    cout<<"enter the size for queue"<<endl;
    cin>>n;
    char q[n];
    int front=-1;
    int rear=-1;
    int ch=1;
    while(ch>0){
        if(front==-1&&rear==n-1){
            rear=-1;
        }
        cout<<"enter choice: 1. enqueue, 2. dequeue, 3. show, 0 to quit"<<endl;
        cin>>ch;
        switch (ch)
        {

        case 1:
            enqueue(q,n,&front,&rear);
            break;
        case 2:
            dequeue(q,n,&front,&rear);
            break;
        case 3:
            show(q,&front,&rear);
            break;
        default:
        cout<<"wrong choice!! enter choice again: "<<endl;
            break;
        }
    }

}