#include<iostream>
using namespace std;
int main(){
  int val;
  cout<<"Enter the number"<<endl;
  if (cin >> val){
    cout<<"you entered"<<val<<endl;
  }
  else{
    cout<<"Invalid input"<<endl;
  }
  return 0;
}