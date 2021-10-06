#include<bits/stdc++.h>
using namespace std;

class a{
    public:
    a(){
        cout<<"constructor of a "<<endl;
    }
    ~a(){
        cout<<"distructor of a "<<endl;
    }
};
class b:public a{
    public:
    b(){
        cout<<"constructor of b "<<endl;
    }
    ~b(){
        cout<<"distructor of b "<<endl;
    }
};
class c:public b{
    public:
    c(){
        cout<<"constructor of c "<<endl;
    }
    ~c(){
        cout<<"distructor of c "<<endl;
    }
};

int main(){
    c C;
}