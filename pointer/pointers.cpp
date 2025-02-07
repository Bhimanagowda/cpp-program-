#include<iostream>
#include<string>
using namespace std;
int main(){
  int c=10;
  int *pc=&c;

  int a=10;
  int *b=&a;
  cout<<b<<endl;
  cout<<*b<<endl;

  string k="amith";
  string *v=&k;
  cout<<*v<<endl;

  string name[5]={"a","b","c","d","e"};
  string *pname=name;
  cout<<*pname<<endl;  //a
  cout<<*(pname+3)<<endl; // d

  cout<<c<<endl;
  cout<<*pc<<endl;
  cout<<endl;

  cout<<&c<<endl;
  cout<<pc<<endl;

  *pc=100;
  cout<<c;
  return 0;
}