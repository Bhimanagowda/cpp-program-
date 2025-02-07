#include<iostream>
using namespace std;
void division(int a,int b)
  {
    if(b==0)
      {
        throw "Division by zero,Not possiable";
      }
    else
      {
        cout<<"Division is "<<a/b<<endl;
      }
  }
int main()
  {
    int num1,num2;
    try
      {
       cout<<"enter the first number and Second number : "<<endl;
       cin>>num1>>num2;
       division(num1,num2);
      }
    catch(const char* e)
      {
        cout<<"Exception caught : "<<e<<endl;
      }
  }