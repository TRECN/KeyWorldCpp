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
    struct node* p,*q;
    p=(struct node*)malloc(sizeof(struct node));
    scanf("%d",&p->data);
    start=p;
    do{
        q=(struct node*)malloc(sizeof(struct node));
        scanf("%d",&q->data);
        p->next=q;
        p=q;
        printf("do you want to create node again(y/n)");
        ch=getch();
    }while(ch=='y');
    p->next=NULL;
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
    traverse();
}