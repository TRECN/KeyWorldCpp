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

