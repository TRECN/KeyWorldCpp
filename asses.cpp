#include<bits/stdc++.h>
using namespace std;
class car{
    private:
        int n;
        string name;
    public:
        void getValue(int a,string b){
            n=a;
            name=b;
        }
        void printValue(){
            cout<<"car number: "<<n<<endl;
            cout<<"car name: "<<name<<endl;  
        }
};

int main(){
    car obj;
    car obj1;
    car *ptr;
    ptr=&obj;
    ptr->getValue(123,"suzuki");
    ptr->printValue();
    ptr=&obj1;
    ptr->getValue(456,"honda");
    ptr->printValue();
    
    return 0;
}