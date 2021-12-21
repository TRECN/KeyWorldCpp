#include<iostream>
#include<string>
using namespace std;
int main(int argc,char const *argv[]){
char s1[6]="hello";
char s2[6]="world";
char s3[12]=s1 + " " + s2;
cout<<s3;
return 0;
}