#include<iostream>
using namespace std;

class ConstFunt
  {
    public:
     int a;
    public:
      void set(int a)
        {
          this->a=a;
        }
       
      void get() const
        {
          a;
          cout<<a<<endl;
        }
  };
int main()
  {
    ConstFunt c;
    c.set(10);
    c.get();
    return 0;
  }