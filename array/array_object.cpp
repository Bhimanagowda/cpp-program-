#include<iostream>
using namespace std;

class Employee
  {
    public:
      int id,age;
      char emp_name[20];
      int salary;
    public:
      void getemployeedetails()
        {
          cout<<"Enter the id,Emp_name and salary"<<endl;
          cin>>id>>emp_name>>age>>salary;
        }
      void printemployeedetails()
        {
          cout<<id<<"\t"<<emp_name<<"\t \t"<<age<<"\t"<<salary<<endl;
        }
  };
int main()
  {
    Employee emp[3];
    for(int i=0;i<3;i++)
      {
        emp[i].getemployeedetails();
      }

    
    cout<<endl<<"..................Employee Details....................."<<endl;
    cout<<"*******************************************************"<<endl;
    cout<<"ID"<<"\t"<<"Emp_name"<<"\t"<<"Age"<<"\t"<<"Salary"<<endl;
    for(int i=0;i<3;i++)
    {
      emp[i].printemployeedetails();
    }
    return 0;
  }