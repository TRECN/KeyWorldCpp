#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* next;
};

struct node* start;

void create(){
    printf("linked list created!!\nenter first element:\n");
    struct node* p;
    p=(struct node*)malloc(sizeof(struct node));
    scanf("%d",&p->data);
    start=p;
    p->next=NULL;
    printf("---------\n\n");
}
void inend(){
    struct node *p,*q;
    q=(struct node*)malloc(sizeof(struct node));
    printf("enter data: ");
    scanf("%d",&q->data);
    p=start;
    while(p->next!=NULL){
        p=p->next;
    }
        q->next=NULL;
        p->next=q;

    printf("---------\n\n");
        
}

void inbeg(){
    strut node *p;
    p=(struct node*)malloc(sizeof(struct node));
    printf("enter data: ");
    scanf("%d",&p->data);
    p->next=start;
    start=p;
}

void traverse(){
    struct node* p;
    p=start;
    while(p!=NULL){
        printf("%d->",p->data);
        p=p->next;
    }
    printf("NULL\n----------\n\n");
}



void main(){

    create();
    int ch=1;


    while(ch>0){
        printf("1. insert at end\n2. traverse\n3. insert in begin\n0. to exit\n");

        scanf("%d",&ch);
        printf("---------\n\n");
        switch(ch){
            case 1:
                printf("insert a node\n");
                inend();
            break;

            case 2:
                printf("traversing...\n");
                traverse();
            break; 
            case 2:
                printf("insert a node\n");
                
            break; 
            case 0:
                break;
            default:
                printf("wrong choice!!\n");
        }
    }
}