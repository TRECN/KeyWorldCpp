#include<stdio.h>
#include<conio.h>
int  main()
{
	int i,num1,num2,hcf,mn;
	
	printf("enter the two nunbers\n");
	scanf("%d%d",&num1,&num2);
	
	 if(num2>num1)
      {
      	mn=num2;
      }
      else
      {
       mn=num1;
      }
      for(i=mn;i>0;i--){
         if(num1%i==0 && num2%i==0){
             break;
         }
      }
      
}