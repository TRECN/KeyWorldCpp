#include<stdio.h>
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
        scanf("%d",&    ->data);
        p->next=q;
        p=q;
        printf("do you want to create node again(y/n)");
        ch=getch();
    }while(ch=='y');
    p->next=NULL;
}

void main(){

}