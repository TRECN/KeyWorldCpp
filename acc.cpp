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
    Student obj("Rishabh",18,"CSE");
    obj.showData();
}