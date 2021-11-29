#include<stdio.h>
#include<stdbool.h>
int main(){

    int a[n];
    printf("enter the elements: \n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("enter the search element: \n");
    scanf("%d",&el);
    while(begin<=end){
        mid = begin + (end-begin)/2;
        if (a[mid] == el){
            c=true;
            break;
        }  
        else if (a[mid] < el)
            begin = mid + 1;
        else
            end = mid - 1;
    }
    if(c==true){
        printf("%d",mid);
    }
    else
        printf("not found");
    return 0;
}