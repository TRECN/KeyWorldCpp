#include<iostream>
using namespace std;
class code{
    public:
        int multi(int a,int b){
            return a*b;
        }

        int div(int a,int b);
};

int code::div(int a,int b){
    return a/b;
}

int main(){
    code obj;
    cout<<obj.multi(2,5)<<endl;
    cout<<obj.div(10,5);
    return 0;
}