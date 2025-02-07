#include<iostream>
using namespace std;
class AbsDemo
{
  public:
  virtual void display()=0;
  virtual void show()=0;
  AbsDemo() 
    {
      cout<<"Default constructor"<<endl;  
    }
  void funt1()
  {
    cout<<"Function 1"<<endl;
  }
};
class AbsDemo2: public AbsDemo
{
  string name,collage_name;
  public:
  void display()
  {
    cout<<"Enter the name and college name"<<endl;
    cin>>name>>collage_name;
  }
  void show()
  {
    cout<<"Name : "<<name<<" "<<"Age : "<<collage_name<<endl;
  }
};
int main()
{
  AbsDemo2 a;
  a.display();
  a.show();
  return 0;
}