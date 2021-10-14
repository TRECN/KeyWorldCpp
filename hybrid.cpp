#include<bits/stdc++.h>
using namespace std;
class Bank{
    public:
        string name;
        int no;
};


class Account2:public Bank{
    public:
        Account2(){
            name="CDE";
            no=345;
            cout<<no<<" "<<name<<endl;
            
        }

};
class show:public Account1,public Account2{
   
        
};


int main(){
    show ob;
    return 0;
}