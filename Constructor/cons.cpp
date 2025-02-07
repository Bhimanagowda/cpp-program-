#include<iostream>
using namespace std;
class DemoClass 
  {
    string name,collage_name;
    int id,age,avg;
    public:
    DemoClass()
      {
        cout<<"Enter the Id,name,college_name,age"<<endl;
        cin>>id;
        cin.ignore();
        getline(cin,name);
        getline(cin,collage_name);
        cin>>age;
        cin.ignore();
        avg=0;
      }
    void display()
      {   
        cout<<"Id : "<<id<<" "<<"Name : "<<name<<" "<<"College_name : "<<collage_name<<" "<<"Age : "<<age<<endl;
      }

    DemoClass(int a,int b,int c)
      {
        avg=(a+b+c)/3;
      }
    ~DemoClass()
      {
        cout<<"Calling Destructor"<<endl;
      }
    void display1()
      {   
        cout<<"Avg marks1 : "<<avg<<endl;
      }
  };
int main()  
  {
    int a,b,c;
    DemoClass d;
    d.display();

    cout<<"Enter the Marks :"<<endl;
    cin>>a>>b>>c;
    DemoClass d1(a,b,c);
    d1.display1();
    return 0;
  }