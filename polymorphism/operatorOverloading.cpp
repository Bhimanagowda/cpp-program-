#include<iostream>
using namespace std;
class OperatorOverloading
  {
    int a,b;
    public:
      OperatorOverloading(int x,int y)
        {
          a=x;
          b=y;
        }
      OperatorOverloading operator +(const OperatorOverloading &c)
        {
          
          return OperatorOverloading(a + c.a, b + c.b);
        }
      
      void display()
        {
          cout<<a<<" + "<<b<<endl;
        }    
  };

int main()
  {
    OperatorOverloading op1(10,20);
    OperatorOverloading op2(100,200);
    OperatorOverloading op3=op1+op2;
    op1.display();
    op2.display();
    op3.display();
  }