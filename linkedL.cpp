#include<bits/stdc++.h>
using namespace std;



void insetAtTail(node* &head,int val){
    node* n=new node(val);
    if(head==NULL){
        head=n;
        return;
    }
    node* temp = head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
}

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