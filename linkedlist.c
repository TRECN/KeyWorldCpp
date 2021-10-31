#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* next;
};

struct node* start;

void create(){
    printf("linked list created!!\nenter first element: ");
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

    create();
    int ch=1;

    printf("1. insert at end\n2. traverse\n0. to exit");

    while(ch>0){
        scanf("%d",&ch);
        switch(ch){
            case 1:
                printf("insert a node\n");
                inend();
            break;

            case 2:
                printf("traversing...\n");
                traverse();
            break; 
            default:
                printf("wrong choice!!") 
        }
    }
}