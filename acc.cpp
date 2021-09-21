#include<bits/stdc++.h>
using namespace std;
class Student {
    private:
        int age;
        string name,branch;
    public:
        Student(string n,int a,string b){
            name=n;
            age=a;
            branch=b;
        }
        void showData(){
            cout<<"details: "<<endl;
            cout<<name<<endl;
            cout<<age<<endl;
            cout<<branch<<endl;
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
    obj.showData();
}