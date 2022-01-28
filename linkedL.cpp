#include<bits/stdc++.h>
using namespace std;

class node{
    public:
        int data;
        node* next;

        node (int val){
            data=val;
            next=NULL;
        }

};



void display(node* head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<endl;
}

int main(){

    node* head=NULL;
    insetAtTail(head,1);
    insetAtTail(head,2);
    insetAtTail(head,3);
    display(head);
    return 0;
}