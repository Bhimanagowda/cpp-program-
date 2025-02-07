#include<iostream>
using namespace std;
class ABC
{
  string name="Amith";
  public:
  void student()
    {
      cout<<"he is men : "<<name<<endl;
    }
};
class XYZ : public ABC
{
  public:
  void student()
    {
      cout<<"he is father"<<endl;
    }
};
class PQR : public XYZ
{
  public:
  void student()
    {
      cout<<"he is husband of his wife"<<endl;
    }
};
class MNO : public PQR
{
  public:
  void student()
    {
      cout<<"he is father of his children"<<endl;
    }
};
class LKJ : public MNO
{
  public:
  void student()
    {
      cout<<"he is grandfather of his grand children"<<endl;
    }
};
int main()
  {
    ABC a;
    PQR p;
    MNO m;
    LKJ l;
    a.student();
    p.student();  
    m.student();
    l.student();
    return 0;
  }