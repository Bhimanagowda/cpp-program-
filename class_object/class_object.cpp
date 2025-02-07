#include<iostream>
using namespace std;
class DemoClass 
  {
    string name,collage_name;
    int id,age;
    public:
    void set()
      {
        cout<<"Enter the Id,name,college_name,age"<<endl;
        cin>>id;
        cin.ignore();
        getline(cin,name);
        getline(cin,collage_name);
        cin>>age;
      }
    void display()
      {   
        cout<<"Id : "<<id<<" "<<"Name : "<<name<<" "<<"College_name : "<<collage_name<<" "<<"Age : "<<age<<endl;
      }
  };
int main()  
  {
    DemoClass d;
    d.set();
    d.display();
    return 0;
  }