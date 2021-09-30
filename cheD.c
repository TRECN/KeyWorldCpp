#include<stdio.h>
#include<stdbool.h>
void palind_Rev_sum(int a){
    int n=a;
    int r=0,s=0,sum;
    bool t=false;
    
    printf("sum: %d\n",sum);
    printf("reverse: %d\n",s);
    if(s==a){
        printf("%d is palindrome.",a);
    }
    else
        printf("%d is not palindrome.",a);
}
int main(){
    int a;
    printf("enter any no: \n");
    scanf("%d",&a);
    palind_Rev_sum(a);
}