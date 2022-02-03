#include<bits/stdc++.h>
using namespace std;
class Bank{
    public:
        string name;
        int no;
};

class Account1:public Bank{
    public:
        Account1(){
            name="ABC";
            no=123;
            cout<<no<<" "<<name<<endl;
            
        }

};


class show:public Account1,public Account2{
   
        
};
