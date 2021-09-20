#include<iostream>
using namespace std;
class a{
    public:
        int multi(int a,int b){
            return a*b;
        }
};
int main(){
    a obj;
    cout<<obj.multi(2,5)<<endl;
    return 0;
}