#include<iostream>
#include<vector>
using namespace std;
int main()
{
  vector<int> num;
  int n;
  try{
    cout<<"Enter the number of elements you want to enter : "<<endl;  
    cin>>n;
    if(n<=0)
    {
      throw "Number of elements should be greater than 0";
    }
    cout<<"Enter the elements : "<<endl;
    for(int i=0;i<n;i++)
    {
      int val;
      cin>>val;
      num.push_back(val);
    }

    cout<<"The elements are : "<<endl;
    for(int i=0;i<num.size();i++)
    {
      cout<<num[i]<<endl;
    }
    cout<<num.size()<<endl;
    cout<<"After pop back"<<endl;
    num.pop_back();

     cout<<"The elements are : "<<endl;
    for(int i=0;i<num.size();i++)
    {
      cout<<num[i]<<endl;
    }
    cout<<num.size()<<endl;
  }
  catch(const char* e)
  {
    cout<<"Exception caught : "<<e<<endl;
  } 
  return 0;
}