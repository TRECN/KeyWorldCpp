#include<bits/stdc++.h>
using namespace std;

class A
{
  int a, b;
  public:
    void set()
    {
    a=50;
    b=30;
    }
  friend int sum(A s);
};


int main()
{
  A c;
  c.set();
  cout<<sum(c);
  return 0;
}