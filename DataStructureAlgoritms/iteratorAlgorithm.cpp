#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()  
  {
      vector<string> empname;
      int size;
      string name;
      cout<<"Enter the size"<<endl;
      cin>>size;

      cout<<"Enter the elements to list of empname"<<endl;
      for(int i=0;i<size;i++)
        {
          cin>>name;
          empname.push_back(name);
        }

      sort(empname.begin(),empname.end());

      vector<string>::iterator it;

      cout<<"After the sorting"<<endl;
      for(it=empname.begin();it!=empname.end();++it)
        {
          cout<<*it<<endl;
        }
      
        return 0;
  }