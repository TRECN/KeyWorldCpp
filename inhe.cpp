#include<bits/stdc++.h>
using namespace std;

class student{
    public:
        string name;
        int roll;

};

class detail:public student{
    public:
        detail(string name,int roll){
            this->name=name;
            this->roll=roll;
        }
        void display(){
            cout<<"student name: "<<name<<endl;
            cout<<"roll: "<<roll<<endl;
        }
};

int main(){
    detail obj("rishabh",2022372);
    obj.display();
    return 0;
}