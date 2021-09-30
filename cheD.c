#include<stdio.h>
#include<stdbool.h>
void palind_Rev_sum(int a){
    int n=a;
    int r=0,s=0,sum;
    bool t=false;
    while(n!=0){
        r=n%10;
        s=s*10+r;
        sum+=r;
        n=n/10;
    }
    printf("sum: %d\n",sum);
    printf("reverse: %d\n",s);
    if(s==a){
        printf("%d is palindrome.",a);
    }
    else
        printf("%d is not palindrome.",a);
}
