#include<bits/stdc++.h>
using namespace std;

class student{
    protected:
        void show(){
            cout<<"student class inherited."<<endl;
        }
};

class detail{
    public:
        void showdetail(){
            cout<<"detail class inherited."<<endl;
        }       
};

class display:protected detail,public student{
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