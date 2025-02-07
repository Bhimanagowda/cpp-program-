#include<iostream>
#include<map>
using namespace std;
int main()
  {
    map<int,string> emp;
    int size,id;
    string name;
    cout<<"Enter the size for stroe the elements"<<endl;
    cin>>size;

    cout<<"Enter the employee id and name"<<endl;
    for(int i=0;i<size;i++)
      {
        cout<<"Employee :  "<<i+1<<endl;
        cout<<"Enter the employee id "<<endl;
        cin>>id;
        cin.ignore();
        cout<<"Enter the employee name"<<endl;
        getline(cin,name);

        emp[id]=name;
      }
    cout<<"The employee details are : "<<endl;
    for(auto &entry : emp)
      {
        cout<<entry.first<<" : "<<entry.second<<endl;
      }
    return 0;
  }