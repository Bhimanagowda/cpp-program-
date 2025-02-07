#include<iostream>
using namespace std;
class SimpleConstructor
  {
    public:
    string name;
    int age;
      SimpleConstructor()
        {
          
          name="amith";
          age=25;
        }
      SimpleConstructor(string a,int b)
        {
          name=a;
          age=b;
        }
      void display()
        {
          cout<<"The name : "<<name<<endl<<"Age : "<<age<<endl;
        }
  };
int main()
  {
    SimpleConstructor s1;
    SimpleConstructor s2("deepak",22);
    s1.display();
    s2.display();
    return 0;
  }
