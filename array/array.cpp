#include<iostream>
using namespace std;
int main()
{
  int a[]={10,2,3,4,5};

  cout<<"Size of one elemenent : "<<sizeof(a[0])<<endl;

  cout<<"Size of all element : "<<sizeof(a)<<endl;

  int n=sizeof(a)/sizeof(a[0]);
  cout<<"Length of array  : "<<n<<endl;
  return 0;

}