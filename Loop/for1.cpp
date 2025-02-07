#include<iostream>
using namespace std;
int main(){
  int sum=0,val=0,n;
  cout<<"Enter the value to calculate the sum of number"<<endl;
  cin>>n;
  for(int i=0;i<n;i++){
    if(cin>>val){
      sum=sum+val;
    }
  }
  cout<<sum<<endl;
  return 0;
}