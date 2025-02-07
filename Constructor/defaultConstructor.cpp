#include<iostream>
#include<cstring>
using namespace std;
class DefaultConstructor
  {
    public:
    string name;
    int age;
      DefaultConstructor()
        {
          
          name="Kumar";
          age=20;
        }
      void display()
        {
          cout<<"The name : "<<name<<endl<<"Age : "<<age<<endl;
        }
  };
int main()
  {
    DefaultConstructor s1;
    s1.display();
    return 0;
  }
