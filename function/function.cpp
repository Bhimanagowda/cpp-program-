#include<iostream>
using namespace std;
int sum(int a,int b)
  {
     int c=a+b;
     return c;
  }

void diff(int a,int b)
  {
    int c=a-b;
    cout<<c<<endl;
  }

void max(int a,int b)
  {
    if(a>b)
      {
        cout<<"a is greater : "<<a<<endl;
      }
    else
      {
        cout<<"b is greater : "<<b<<endl;
      }
  }
int main()
{
  int x,a,b;
  cout<<"enter the two value to a,b for sum"<<endl;
  cin>>a>>b;
  x=sum(a,b);
  cout<<x<<endl;
  
  diff(5,2);

  max(1992,321);
  return 0;
}