#include<bits/stdc++.h>
using namespace std;

class A{
    public:
        int a;
};

class C:public virtual A{
    public:
        void display(){
            cout<<a;
        }
};


int main(){
    D obj;
    obj.a=10;
}