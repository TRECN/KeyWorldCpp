#include<bits/stdc++.h>
using namespace std;
class S
{
    public:
        static int a;
        S (){
            a++;
            cout<<"constructor : "<<a<<endl;
        }

        ~S(){
            a++;
            cout<<"distructor : "<<a<<endl;
            
        }
};
int S::a=0;
int main(){
    S obj;
    S obj2;
    S::a=0;
    return 0;
}

