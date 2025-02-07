#include<iostream>
using namespace std;
int main(){

  int n;
  cout<<"Enter the number to calculate in table form"<<endl;
  cin>>n;
  for(int i=1;i<=10;i++){
    cout<<n<<"*"<<i<<"="<<(n*i)<<endl;
  }

  int sum=0,val;
  cout<<"Enter the value to calculate the sum of number"<<endl;
  cin>>val;
  for(int i=0;i<=val;i++){
    sum=sum+i;
  }
  cout<<sum<<endl;
  return 0;
}