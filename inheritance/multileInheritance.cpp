#include<iostream>
using namespace std;
class A
{
  public:
    void a()
      {
        cout<<"A"<<endl;
      }
};
class B
{
  public:
    void b()
      {
        cout<<"B"<<endl;
      }
};
class C : public A,public B
{
  public:
    void c()
      {
        cout<<"C"<<endl;
      }
};
int main()
  {
    C c;
    c.a();
    c.b();
    c.c();
    return 0;
  }
