#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* next;
};

struct node* start;






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
    struct node* p;
    p=(struct node*)malloc(sizeof(struct node));
    printf("enter data: ");
    scanf("%d",&p->data);
    p->next=start;
    start=p;
    printf("---------\n\n");
}

void givenVal(){
    struct node* p,*q;
    int x;
    q=(struct node*)malloc(sizeof(struct node));
    p=start;
    printf("enter the data after which you want add a node: ");
    scanf("%d",&x);
    printf("enter the value: ");
    scanf("%d",&q->data);
    while(p->data!=x){
        if(p->next==NULL&&p->data!=x){
            printf("node does not exist");
            break;
        }
        p=p->next;
    }
    q->next=p->next;
    p->next=q;
    printf("---------\n\n");
    
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
        printf("1. insert at end\n2. traverse\n3. insert in begin\n4. at given value\n0. to exit\n");
        
        scanf("%d",&ch);
        printf("---------\n\n");
        switch(ch){
            case 1:
                printf("creating a node...\n");
                inend();
            break;

            case 2:
                printf("traversing...\n");
                traverse();
            break; 
            case 3:
                printf("creating a node...\n");
                inbeg();   
            break; 
            case 4:
                givenVal();  
            break; 
            case 0:
                break;
            default:
                printf("wrong choice!!\n");
        }
    }
}