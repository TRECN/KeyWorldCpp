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

void reverse(){
    struct node* a=start;
    struct node* b=NULL;
    struct node* c;
    while(a!=NULL){
        c=a->next;
        a->next=b;
        b=a;
        a=c;
    }
    start=b;
}

void sorting(){
    struct node* p=start;
    struct node* q;
    int t;
    while(p->next!=NULL){
        q=p->next;
        while(q!=NULL){
            if(p->data>q->data){
                t=p->data;
                p->data=q->data;
                q->data=t;
            }
            q=q->next;
        }
        p=p->next;
    }    

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
        p=p->next;
    }
    q->next=p->next;
    p->next=q;
    printf("---------\n\n");
    
}


void befgivenVal(){
    struct node* p,*q;
    int x;
    
    q=(struct node*)malloc(sizeof(struct node));
    p=start;
    printf("enter the data before which you want add a node: ");
    scanf("%d",&x);
    printf("enter the value: ");
    scanf("%d",&q->data);
    while(p->next->data!=x){
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

void acend(){
    struct node* p, *q,*i;
    q=(struct node*)malloc(sizeof(struct node));
    p=start;
    printf("enter the value: ");
    scanf("%d",&q->data);
    while(p->data<q->data){
        i=p;
        p=p->next;
    }
    i->next=q;
    q->next=p;
    

}

void delbeg(){
    struct node *p;
    p=start;
    start=p->next;
    free(p);
}

void delend(){
    struct node *p,*i;
    p=start;
    while(p->next->next!=NULL){
        p=p->next;
    }
    i=p->next;
    p->next=NULL;
    free(i);
    
}

void delpos(){
    struct node* p,*q;
    int x;
    p=start;
    printf("enter the data whose node you want to delete:");
    scanf("%d",&x);
    while(p->data!=x){
        q=p;
        p=p->next;
    }
    
    q->next=p->next;
    free(p);

}

void main(){

    create();
    int ch=1;


    while(ch>0){
        printf("1. insert at end\n2. traverse\n3. insert in begin\n4. after given value\n5. before given value\n6. ascending insert\n7. delete at beg\n8. delete at end\n9. delete at pos\n10. reverse\n11. sorting\n\n0. to exit\n");
        
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
            case 5:
                befgivenVal();  
            break; 
            case 6:
                acend();  
            break; 
            case 7:
                delbeg();  
            break; 
            case 8:
                delend();  
            break; 
            case 9:
                delpos();  
            break; 
            case 10:
                reverse();  
            break; 
            case 11:
                sorting();  
            break; 
            case 0:
                break;
            default:
                printf("wrong choice!!\n");
        }
    }
}