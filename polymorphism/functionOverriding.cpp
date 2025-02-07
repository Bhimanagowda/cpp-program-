#include<iostream>
using namespace std;
class BaseClass
  {
    public:
      void details()
        {
          cout<<"This is parent class details"<<endl;
        }
  };

class DerivedClass : public BaseClass
  {
    public:
      void details()
        {
          cout<<"This is child class details"<<endl; //Overriding the funtions
          BaseClass :: details(); // calling parent's class funtion
        }
  };

int main()
  {
    DerivedClass d1;
    d1.details();
    return 0;
  }