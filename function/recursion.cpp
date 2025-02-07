#include<iostream>
using namespace std;
int sum(int a)
  {
    if(a!=0)
      {
        return a+sum(a-1);
      }
    else
      {
        return 0;
      }
  }
int fact(int num)
  {

  }
int main()
  {
    int num;
    cout<<"Enter the number"<<endl;
    cin>>num;
    cout<<"Sum is :"<<sum(num)<<endl;
    return 0;

    cout<<"Enter the number"<<endl;
    cin>>num;
    cout<<"the fact of "<<num<<"is"<<fact(num)<<endl;
  }