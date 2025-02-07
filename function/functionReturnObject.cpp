#include<iostream>
using namespace std;

class Complex
  {
    private:
      int real,img;
    friend Complex complex(Complex c1,Complex c2); //declartion of friend function
    public:
      void set(int real,int img)
        {
          this->real=real;
          this->img=img;
        }
      void get()
        {
          cout<<"Real and img are :"<<real<<"+"<<img<<"i"<<endl;
        }
  };
Complex complex(Complex c1,Complex c2)
  {
    Complex c3;
    c3.real=c1.real+c2.real;
    c3.img=c1.img+c2.img;
    return c3;
  }
int main()
  {
    Complex c1,c2;
    c1.set(10,20);
    c1.get();
    c2.set(2,4);
    c2.get();
    Complex c3=complex(c1,c2);
    c3.get();
  }