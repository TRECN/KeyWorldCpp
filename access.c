#include<stdio.h>
int factorial(int a){
    int fac=1;
    for (int i=1; i<=a;i++){
        fac=fac*i;
    }
    return fac;
}
int main(){
    int a=5;
    printf("%d",factorial(a));
    return 0;
}
