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

      
};
int S::a=0;
int main(){
    S obj;
    S obj1;
    S obj2;
    S::a=0;
    return 0;
}

