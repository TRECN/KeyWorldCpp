#include<bits/stdc++.h>
using namespace std;

void enqueue(int *q,int n,int *front, int *rear){
    if(*rear==n-1)
        cout<<"overflow"<<endl;
    else{
        cout<<"enter data: "<<endl;
        int data;
        cin>>data;
        if(*front==-1){
            *front+=1;
            *rear+=1;
            q[*rear]=data;
        }
        else{
            *rear+=1;
            q[*rear] = data;
        }
    }
    //cout<<"front: "<<*front<<endl<<"rear: "<<*rear<<endl;
}

void dequeue(int *q,int n,int *front, int *rear){
    if(*front==-1)
        cout<<"underflow!!"<<endl;
    else{
        if(*front==*rear){
            q[*front]=NULL;
            *front=-1;
        }else{
            q[*front]=NULL;
            *front=*front+1;
        }
    }

    // cout<<"front: "<<*front<<endl<<"rear: "<<*rear<<endl;
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
    cout<<"enter the size of queue: "<<endl;
    cin>>n;
    int q[n];
    int front=-1;
    int rear=-1;
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