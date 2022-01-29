#include<bits/stdc++.h>
using namespace std;
class A{
    

        friend A operator+= (A j,A i){
            A k;
            k.a=j.a*i.a;
            k.b=j.b*i.b;
            return (k);
        }
        virtual void show(A a){
            
        }
        void show(){
            cout<<a<<"\t"<<b<<"\n";
        }
};
class B : public A{
    public:
        void show(A a){
            a.show();
        }
        
};
int main(){
    A *ptr;
    B ptr1;
    ptr=&ptr1;

    A o1(3,2);
    A o2(2,2);
    A o3;
    
    cout<<"showing values in o1 and o2 using o3 as function overloading\n";
    ptr->show(o1);
    ptr->show(o2);
    cout<<"operator overloading\n";
    ptr->show(o1);
    cout<<"    X"<<endl;
    ptr->show(o2);
    cout<<"---------"<<endl;
    o3 = o1 += o2;
    ptr->show(o3);

    
    
    return 0;
}
