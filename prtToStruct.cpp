#include<bits/stdc++.h>
using namespace std;

struct Student
{
    int roll;
    int age;
};


int main(){
    struct Student s1;
    struct Student *p;
    p=&s1;
    p->roll=100;
    p->age=22;
    cout<<"your roll no="<<p->roll<<endl;
    cout<<"your age="<<p->age<<endl;
}