#include<iostream>
using namespace std;
int main()  
  {
    int size;
    cout<<"Ente the size of array"<<endl;
    cin>>size;
    cin.ignore();
    
    string *name=new string[size];
    int *age=new int[size];
    cout<<"Enter the name and age : "<<endl;
    for(int i=0;i<size;i++)
      {
        getline(cin,name[i]);
        cin>>age[i];
        cin.ignore();
      }
    
    cout<<"Display the details :"<<endl;
    cout<<"name"<<"   "<<"age"<<endl;
    for(int i=0;i<size;i++)
      {
        cout<<name[i]<<"  "<<age[i]<<endl;
      }
    delete[] name;
    delete[] age;
    name=nullptr;
    age=nullptr;

    return 0;
  }