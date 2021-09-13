#include<iostream>
using namespace std;
class a{
    public:
        int sum(int a,int b){
            return a+b;
        }

};
int main(){
    a obj;
    cout<<obj.sum(2,5)<<endl;

    return 0;
}