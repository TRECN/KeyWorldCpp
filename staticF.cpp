#include<bits/stdc++.h>
using namespace std;

class A{
        
    public:
    static int a;
        static void show(){
            a++;
            cout<<a<<endl;
        }
};
int A::a=0;
int main(){
        A::show();
        A::show();
        A::show();
    return 0;
}