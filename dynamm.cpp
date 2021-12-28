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
    S *s=new S[3];
    S::a=0;
    delete []s;
    return 0;
}

