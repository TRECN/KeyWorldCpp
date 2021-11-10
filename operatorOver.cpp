#include<bits/stdc++.h>
using namespace std;
class A{
    int a;
    int b;
    public:
        A(){}
        A(int a1,int b1){
            a=a1;
            b=b1;
        }

        friend A operator+= (A j,A i){
            A k;
            k.a=j.a*i.a;
            k.b=j.b*i.b;
            return (k);
        }

        void show(){
            cout<<a<<"\t"<<b<<endl;
        }
};
int main(){
    
    
    return 0;
}
