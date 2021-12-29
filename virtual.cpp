#include<bits/stdc++.h>
using namespace std;

class A{
    public:
        int a;
};

class B:public virtual A{
    public:
        void display(){
            cout<<a;
        }
};

class D:public B,public C{
    public:
        B::display();
        C::display();
};


int main(){
    D obj;
    obj.a=10;
}