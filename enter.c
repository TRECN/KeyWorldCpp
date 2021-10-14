#include<stdio.h>
int main(){
    int n;
    printf("enter size of array: \n");
    scanf("%d",&n);
    int a[n];
    printf("enter elements of array: \n");
    
    for(int i=0;i<n;i++){
        printf("%d\n",a[i]);
    }
}