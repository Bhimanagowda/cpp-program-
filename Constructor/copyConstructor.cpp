#include<iostream>
using namespace std;
class CopyConstructor
  {
    public :
    string name;
    int age;
    CopyConstructor(string a,int b)
      {
        name=a;
        age=b;
      }
    
    CopyConstructor(const CopyConstructor &obj)
      {
        name=obj.name;
        age=obj.age;
      }
    void display()
      {
        cout<<"Th name :"<<name<<endl<<"Age :"<<age<<endl;
      }
  };
int main()
  {
      CopyConstructor c1("Karthika",20);
      CopyConstructor c2=c1;
      cout<<"Before copy constructor"<<endl;
      c1.display();
      cout<<"*************************"<<endl;
      cout<<"Copy constructor"<<endl;
      c2.display();
      return 0;

  }