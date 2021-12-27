//multiple inheritance
#include<bits/stdc++.h>
using namespace std;



class detail{
    protected:
        void showdetail(){
            cout<<"detail class inherited."<<endl;
        }       
};

class display:private student,public detail{
    public:
        display(){
            showdetail();
            show();
        }
};

int main(){
    display ob;
    return 0;
}