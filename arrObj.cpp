#include<bits/stdc++.h>
using namespace std;
class car{
    private:
        int n;
        string name;
    public:
        car(int a,string b){
            getValue(a,b);
            printValue();
        }
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
    int a;
    cout<<"enter number of objects: "<<endl;
    cin>>a;
    car obj[a];
    
    return 0;
}