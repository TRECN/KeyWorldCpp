#include <stdio.h>
#include<string.h>


int main(){
    ubt arr[]={1,2,3,4,5};
    int *ptr1,*ptr2;
    ptr1=arr;
    ptr2=&arr[3];
    printf("%d",ptr2+ptr1);
}