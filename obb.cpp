#include<bits/stdc++.h>
using namespace std;
class Multiply {
    public:
        int a;

        Multiply mult(Multiply Ma, Multiply Mb){
            Multiply Mc;
            Mc.a = Ma.a * Mb.a;
            return Mc;
        }
        
};
int main(){
    Multiply M1,M2,M3;

    M1.a=3;
    M2.a=4;
    M3.a=0;

    cout<<"Inital values: "<<endl<<"Value of objects 1,2,3: "<<endl<<M1.a<<endl<<M2.a<<endl<<M3.a<<endl;

    M3=M3.mult(M1,M2);

    cout<<"Final values: "<<endl<<"Value of objects 1,2,3: "<<endl<<M1.a<<endl<<M2.a<<endl<<M3.a<<endl;

}