#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
int i,j,temp,n,k;
int arr[100];
printf("\nEnter Number of Elements:");
scanf("%d",&n);
printf("Enter %d numbers:",n);
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
printf("\nEnter Element to Search:");
scanf("%d",&temp);
k=0;
for(i=0;i<n;i++)
{
if(temp==arr[i])
{
k+=1;
printf("Location of Element %d in Array is %d",temp,i+1);
}
}
if(k==0)
{
printf("Element Not Found!!!");
}
getch();
}
