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
    struct node* p,*q;
    p=(struct node*)malloc(sizeof(struct node));
    scanf("%d",&p->data);
    p->next=NULL;
    start=p;  
    printf("---------\n\n");
}
void push(){
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
void pop(){
     struct node *p,*i;
    p=start;
    while(p->next->next!=NULL){
        p=p->next;
    }
    i=p->next;
    p->next=NULL;
    free(i);
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
         printf("enter choice: 1. push, 2. pop, 3. show, 0 to quit\n");
        
        scanf("%d",&ch);               
        printf("---------\n\n");
        switch (ch)
        {
        case 0:
            break;
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            traverse();
            break;
        
        default:
        printf("wrong choice!!\n");
            break;
        }
    }
}