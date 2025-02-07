#include<iostream>
using namespace std;
int fact(int num)
  {
    if(num<1)
      {
        return 1;
      }
    else
      {
        return num*fact(num-1);
      }
  }
int fibo(int num)
  {
    if(num<=1)
      {
        return 0;
      }
    else
      {
        return fibo(num-1)+fibo(num-2);
      }
  }
int main()
  {
    int num;
    cout<<"Enter the number"<<endl;
    cin>>num;
    cout<<"the fact of "<<num<<" is : "<<fact(num)<<endl;
  }