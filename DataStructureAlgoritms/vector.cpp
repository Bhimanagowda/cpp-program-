//Store the multiply value in 1 variable and dynamic u have to cahnge the size.
#include<iostream>
#include<vector>
using namespace std;
int main()
  {
    vector<string> names={"Amith","Deepak","Rama","Krishna","Shiva"};
    
    cout<<names[1]<<endl;

    names.at(1)="bhagavan";
    for(int i=0;i<names.size();i++)
      {
        cout<<"Names of student : "<<names[i]<<endl;
      }
    
    cout<<"********************************"<<endl;

    cout<<names.size()<<endl;

    cout<<names.front()<<endl;
    cout<<names.back()<<endl;

    names.push_back("Sanjana");
    for(int i=0;i<names.size();i++)
      {
        cout<<"Names of student : "<<names[i]<<endl;
      }
    
    cout<<"********************************"<<endl;

     names.pop_back();
     for(int i=0;i<names.size();i++)
      {
        cout<<"Names of student : "<<names[i]<<endl;
      }
    

    cout<<"********************************"<<endl;

    for(string name : names)
      {
        cout<<"Names of Employee : "<<name<<endl;
      }

      cout<<names.empty()<<endl;

      return 0;    
  }