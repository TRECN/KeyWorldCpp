#include<stdio.h>
#include<stdbool.h>
int main(){
    int n;
    bool c=false;
    printf("enter the length of array: ");
    scanf("%d",&n);
    int begin=0,end=n-1,el,mid,i;
    
    int a[n];
  
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