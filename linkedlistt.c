//Linked list Insert at SPECIFIC position Before the node
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *start;
void create()
{
    char ch;
    struct node *p, *q;
    p = (struct node *)malloc(sizeof(struct node));
    scanf("%d", &p->data);
    start = p;
    do
    {
        q = (struct node *)malloc(sizeof(struct node));
        scanf("%d", &q->data);
        p->next = q;
        p = q;
        printf("Do you want to create node again(y/n)\n");
        ch = getch();

    } while (ch == 'y');
    p->next = NULL;
}
void Traverse()
{
    struct node *p;
    printf("Linked list elements\n");
    p = start;
    while (p != NULL)
    {
        printf("%d\n", p->data);
        p = p->next;
    }
}
    void insertbfore()
    {
        struct node *p,*q;
        int x;
        q= (struct node*)malloc(sizeof(struct node));
        printf("Enter the insert data\n");
        scanf("%d",&q->data);
        printf("Enter the data ,where you before insert\n");
        scanf("%d",&x);
        p = start;
        while(p->data!=x)
        {
            p= p->next;
        }
        p->next = q->next;
        p =q;
        p->next = q;
    }
    
    
int main()
{
    printf("creating: ");
    create();
    printf("traversing");
    Traverse();
    printf("insert bef");
    insertbfore();
    printf("traversing");
    Traverse();
    return 0;

}