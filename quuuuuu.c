#include <stdio.h>
int Queue[50], n = 50;
int rear = -1;
int front = -1;
void insertion()
{
   int val;

   if (rear == n - 1)
   {
      printf("Queue is Overflow\n");
   }
   else
   {
   
}

void display()
{
   int i;
   if (front == -1)
      printf("Queue is empty \n");
   else
   {
      printf("Queue is : \n");
      for (i = front; i <= rear; i++)
         printf("%d\n ", Queue[i]);
      
   }
}
int main()
{
   int choice;
   do
   {
      printf("Enter choice:\n ");
      scanf("%d", &choice);
      switch (choice)
      {
        case 1:
            insertion();
        break;
      
        case 2:      
            deletion();
        break;
      
        case 3:
            display();
        break;
      
        case 4:
            printf("Exit");
        break;
      
        default:      
            printf("Invalid Choice");
      }
   } while (choice < 4);
   return 0;
}