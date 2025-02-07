#include<iostream>
using namespace std;  
class Abc
  {
    int a=10;
    public:
     virtual void display() //virtual keyword is used to achieve runtime polymorphism  
      {
        cout<<"a : "<<a<<endl;
      }
  };
class Pqr : public Abc
  { int b=100;
    public:
    void display()
      {
        cout<<"b : "<<b<<endl;
      }
  };

class Demo  
  {
    int a=10;
    string name="Amith";
    public:
    void display()
      {
        cout<<"a : "<<a<<" "<<"name : "<<name<<endl;
      }
    void display(int a)
      {
        cout<<"a : "<<a<<endl;
      }
    void display(string name)
      {
        cout<<"name : "<<name<<endl;
      }
    void display(int a,string name)
      {
        cout<<"a : "<<a<<" "<<"name : "<<name<<endl;
      }
    void display(string name,int a)
      {
        cout<<"name : "<<name<<"a : "<<a<<endl;
      }
  };
int main()
  {
    cout<<"Compile time polymorphism"<<endl;
    Demo d;
    d.display();
    d.display(100);
    d.display("Amith");
    d.display(100,"Amith");
    d.display("Amith",100);
    cout<<endl;
    cout<<"Run time polymorphism"<<endl;
    Abc *ptr;
    Pqr p;
    ptr=&p;
    ptr->display();
    p.display();


    return 0;
  }