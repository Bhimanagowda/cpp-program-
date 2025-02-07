#include<iostream>
using namespace std;
class A
{
  string college="SSIT";
  public:
  void display()
    {
      cout<<"college : "<<college<<endl;
    }
};
class B : public A
{
  string name="Amith";
  int age=25;
  public:
  void display1()
    {
      cout<<"Name : "<<name<<" "<<"age : "<<age<<endl;
    }
};
int main()
  {
   B b;
   b.display();
   b.display1();
  }