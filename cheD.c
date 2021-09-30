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
    
}
int main(){
    int a;
    printf("enter any no: \n");
    scanf("%d",&a);
    palind_Rev_sum(a);
}