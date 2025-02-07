#include<iostream>
#include<vector>
using namespace std;
int main()
{
  vector<int> v;

  vector<int> v1{1,2,3,4,5};
  vector<int>::iterator ptr;
  cout<<"It's a iterator"<<endl;
  for(ptr=v1.begin();ptr!=v1.end();ptr++)
  {
    cout<<*ptr<<" ";
  }
  cout<<endl;
  cout<<"It's a normal Vector"<<endl;
  for(int i=0;i<15;i++)
  {
    v.push_back(i);
  }
  for(auto it=v.begin();it!=v.end();it++)
  {
    cout<<*it<<" ";
  }

  v.resize(11);
  cout<<endl<<"After the resize"<<endl;
  for(auto it=v.begin();it!=v.end();it++)
  {
    cout<<*it<<" ";
  }
  cout<<endl<<"Size of vector : "<<v.size()<<endl;
  if(v.empty()==false)
  {
    cout<<"vector is not empty"<<endl;
  }
  else
  {
    cout<<"vector is empty"<<endl;
  }
  return 0;
}