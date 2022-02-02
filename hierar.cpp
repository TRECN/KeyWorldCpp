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

class car2:public cars{
    public:
        car2(int no){
            cout<<no<<" ";
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

