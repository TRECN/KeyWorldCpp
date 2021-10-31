#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* next;
};

struct node* start;

void create(){
    char ch;
    struct node* p;
    p=(struct node*)malloc(sizeof(struct node));
    scanf("%d",&p->data);
    start=p;
    p->next=NULL;
}
void inend(){
    struct node *p,*q;
    q=(struct node*)malloc(sizeof(struct node));
    scanf("%d",&q->data);
    p=start;
    while(p->next!=NULL){
        p=p->next;
    }
        q->next=NULL;
        p->next=q;
        
}
void traverse(){
    struct node* p;
    p=start;
    while(p!=NULL){
        printf("%d->",p->data);
        p=p->next;
    }
}
void main(){
    printf("linked list created");
    create();
    int ch=1;

    printf("1. insert at end\n2. traverse")

    while(ch>0){
        switch(ch){
            case 1:
                print("insert a node\n");
                inend();
            break;

            case 2:
                print("traversing...\n")
                traverse();
        }
    }
}