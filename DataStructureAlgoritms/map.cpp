#include<iostream>
#include<map>
using namespace std;
int main()
  {
    map<int,string> person;
    int size,id;
    string name;
    cout<<"Enter the size for store the elements"<<endl;
    cin>>size;

    cout<<"Enter the people's id and name "<<endl;
    for(int i=0;i<size;i++)
      {
        cout<<"People : "<<i+1<<endl;
        cout<<"Enter person id"<<endl;
        cin>>id;
        cin.ignore();
        cout<<"Enter person name"<<endl;
        getline(cin,name);

        person[id]=name;
      }
    
    cout<<"The person details are : "<<endl;
    for(auto &entry : person)
      {
        cout<<entry.first<<" : "<<entry.second<<endl;
      }
    return 0;
  }