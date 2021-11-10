#include<bits/stdc++.h>
using namespace std;

class A{
        
    public:
    static int a;
        A(){
            a++;
        }
};
int A::a=0;
int main(){
    A obj;
        cout<<"object no.: "<<A::a<<endl;
    A obj1;
        cout<<"object no.: "<<A::a<<endl;
    A obj2;
        cout<<"object no.: "<<A::a<<endl;
    return 0;
}