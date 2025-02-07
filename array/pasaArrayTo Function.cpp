#include<iostream>
using namespace std;
// class ArrayDemo
//   {
    void fun(int a[],int n)
      {
        for(int i=0;i<n;i++)
          {
            cout<<a[i]<<endl;
          }
      }
  // };
int main()
  {
    int a[]={2,4,5};
    fun(a,3);
  }