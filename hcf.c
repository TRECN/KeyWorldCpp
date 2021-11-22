#include<stdio.h>
#include<conio.h>
int  main()
{
	int i,num1,num2,hcf,mn;
	
	printf("enter the two nunbers\n");
	scanf("%d%d",&num1,&num2);
	
	 
      for(i=mn;i>0;i--){
         if(num1%i==0 && num2%i==0){
             break;
         }
      }
      printf("the hcf of these two number is %d\n",i);
         return 0;
}