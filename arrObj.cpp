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
    int a;
    cout<<"enter number of objects: "<<endl;
    cin>>a;
    int n;
    string name;
    car obj[a];
    for(int i=0;i<a;i++){
        cout<<"enter car details: "<<endl;
        cin>>n>>name;
        obj[i].getValue(n,name);
    }
    return 0;
}