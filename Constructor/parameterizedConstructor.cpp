#include<iostream>
using namespace std;
class ParameterizedConstructor
  {
    public:
    string name;
    int age;
      ParameterizedConstructor(string a,int b)
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
    ParameterizedConstructor s2("Bharath",28);
    s2.display();
    return 0;
  }
