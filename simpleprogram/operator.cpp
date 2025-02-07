#include<iostream>
using namespace std;
class A
{
  int a=10;
  public:
  A()
    {
      cout<<"A : "<<a<<endl;
    }
  void operator ++()
    {
      a=a+10;
      cout<<"After ++ operator  : "<<a<<endl;
    }
  void operator --()
    {
      a=a-10;
      cout<<"After -- operator  : "<<a<<endl;
    }
  void operator +()
    {
      a=a+40;
      cout<<"After ++ operator  : "<<a<<endl;
    }
  void operator -()
    {
      a=a-5;
      cout<<"After -- operator  : "<<a<<endl;
    }
};
class B
{
  int k=50;
  public:
  void operator ++(int)
    {
      this->k=k+10;
      cout<<"After ++ operator  : "<<k<<endl;
    }
};
int main()
  {
    A a;
    ++a; 
    --a;
    +a; 
    -a;
    B b;
    b++;
    return 0;
  }