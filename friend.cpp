
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

int sum(A s)
{
  return int(s.a+s.b);
}
int main()
{
  A c;
  c.set();
  cout<<sum(c);
  return 0;
}