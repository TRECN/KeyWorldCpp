//multiple inheritance
#include<bits/stdc++.h>
using namespace std;

class student{
    protected:
        void show(){
            cout<<"student class inherited."<<endl;
        }
};

class detail{
    protected:
        void showdetail(){
            cout<<"detail class inherited."<<endl;
        }       
};

class display:private student,public detail{
    public:
        display(){
            showdetail();
            show();
        }
};

