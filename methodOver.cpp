#include<bits/stdc++.h>
using namespace std;
class sum{
    public:
        void show(){
            int a=10,b=20;
            cout<<a+b<<endl;
        }
};

class diff:public sum{
    public:
        void show(){
            int a=30,b=20;
            cout<<a-b<<endl;
        }
};

int main(){
    diff obj;
    obj.show();

    obj.sum::show();

    sum *ptr=&obj;
    ptr->show();
}