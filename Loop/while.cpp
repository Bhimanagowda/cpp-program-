#include<iostream>
using namespace std;
int main()
{
  int n=0;
  while(n <10)
  {
    cout<<n<<endl;
    n=n+1;
  }

  int count=0,sum=0,n=5;
  while(count <=  n){
    sum=sum+count;
    count=count+1;
  }
  cout<<sum<<endl;
  return 0;
}