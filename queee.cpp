#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"enter the size of queue: "<<endl;
    cin>>n;
    int q[n];
    int front=-1;
    int rear=-1;
    int ch;
    do{
        if(front==-1&&rear==n-1){
            rear=-1;
        }
        cout<<"enter choice: 1. enqueue, 2. dequeue, 3. show, 4 to quit"<<endl;
        cin>>ch;
        switch (ch)
        {
            //enqueue
            case 1:
                if(rear==n-1)
                    cout<<"overflow"<<endl;
                else{
                    cout<<"enter data: "<<endl;
                    int data;
                    cin>>data;
                    if(front==-1){
                        front+=1;
                        rear+=1;
                        q[rear]=data;
                    }
                    else{
                        rear+=1;
                        q[rear] = data;
                    }   
                }
                
            break;
            //dequeue
            case 2:
                if(front==-1)
                    cout<<"underflow!!"<<endl;
                else{
                   
                }
            break;

            //show queue
            case 3:
                if(front!=-1){
                    cout<<"queue: ";
                    for(int i=front;i<=rear;i++){
                        cout<<q[i]<<" ";
                    }
                }
                else{
                    cout<<"queue is empty";
                }
                cout<<endl;
            break;

        //wrong choice
            default:
                cout<<"wrong choice!! enter choice again: "<<endl;
            break;
        }
    }while(ch!=4);
}