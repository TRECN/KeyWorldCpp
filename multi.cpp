//multilevel
#include<bits/stdc++.h>
using namespace std;

class student{
    public:
        void show(){
            cout<<"student class inherited."<<endl;
        }
};

class detail:public student{
    public:
        void showdetail(){
            show();
            cout<<"detail class inherited."<<endl;
        }
        
};

class display:private detail{
    public:
        display(){
            showdetail();
            show();
        }

};

int main(){
    display ob;
    return 0;
}