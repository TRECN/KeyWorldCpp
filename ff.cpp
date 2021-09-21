#include<bits/stdc++.h>
using namespace std;
class Student {
    public:
    string name,branch;
    int age;
    Student(string n, int a, string b){
        name=n;
        age=a;
        branch=b;
    }
};
int main(){
    string name,branch;
    int age;
    cout<<"enter student name, age, branch: "<<endl;
    cin>>name;
    cin>>age;
    cin>>branch;
    Student obj(name,age,branch);
    cout<<"details: "<<endl;
    cout<<obj.name<<endl<<obj.age<<endl<<obj.branch;
}
