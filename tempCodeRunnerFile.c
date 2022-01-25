#include <stdio.h>
#include<string.h>


int main(){
    struct student{
    int no;
    char name[20];
};
    struct student s;
    s.no=8;
    printf("%d",s.no);
}