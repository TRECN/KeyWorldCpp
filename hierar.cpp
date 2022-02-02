#include<bits/stdc++.h>
using namespace std;
class cars{
    public:
        string company="Car";
};

class car1:public cars{
    public:
        car1(int no){
            cout<<no<< " ";
            cout<<company<<endl;
            
        }

};


class car3:public cars{
    public:
        car3(int no){
            cout<<no<<" ";
            cout<<company<<endl;
            
        }

};


int main(){
    car1 ob(1);
    car2 ob1(2);
    car3 ob2(2);
    return 0;
}