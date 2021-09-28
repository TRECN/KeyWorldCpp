#include<bits/stdc++.h>
using namespace std;

class student{
    private:
        string name;
        int roll;
        int age;
    public:
        student(string name,int roll, int age){
            this->name=name;
            this->roll=roll;
            this->age=age;
        }
        void show(){
            cout<<"name of student: "<<name<<endl;
            cout<<"roll no. of the student: "<<roll<<endl;
            cout<<"age of the student: "<<age<<endl;
        }
};

int main(){

    student obj("Rishbah",2022372,18);
    obj.show();
    return 0;
}