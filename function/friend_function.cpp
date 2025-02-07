#include<iostream>
using namespace std;

class Complex
  {
    private:
    int real,img;
    friend void complex(Complex c1,Complex c2); //declartion of friend function
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
void complex(Complex c1,Complex c2)
  {
    Complex c3;
    c3.real=c1.real+c2.real;
    c3.img=c1.img+c2.img;
    cout<<"result is : "<<endl;
    cout<<"Complex no: "<<c3.real<<"+"<<c3.img<<"i"<<endl; 
  }
int main()
  {
    Complex c1,c2;
    c1.set(10,20);
    c1.get();
    c2.set(2,4);
    c2.get();

    cout<<"Friend Funtion"<<endl;
    complex(c1,c2);
    return 0;
  }