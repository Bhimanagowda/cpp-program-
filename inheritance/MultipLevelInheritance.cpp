#include<iostream>
#include<string>
using namespace std;
class Employee
  {
      string name;
      int id;
    public:
      void getEmployeedetails()
        {
          cout<<"Enter the employee name and id : "<<endl;
          getline(cin,name);
          cin>>id;
        }
      void displayEmployeedeatils()
        {
          cout<<"Employee name : "<<name<<endl<<"ID : "<<id<<endl;
        }

  };

class Salary : public Employee
  {
    int salary;
    public:
      void getsalarydetails()
        {
          cout<<"Enter the  salary : "<<endl;
          cin>>salary;
        }
      void displaysalarydeatils()
        {
          cout<<"salary : "<<salary<<endl;
        }
  };

class PhoneNumber : public Salary
  {
    long long phone_number;
    public:
      void getroledetails()
        {
          cout<<"Enter the phone_number ; "<<endl;
          cin>>phone_number;
        }
      void displayroledeatils()
        {
          cout<<"phone_number  : "<<phone_number<<endl;
        }
  };
int main()
  {
    Salary s1;
    PhoneNumber p1;
    s1.getEmployeedetails();
    s1.getsalarydetails();
    p1.getroledetails();
    cout<<endl;
    s1.displayEmployeedeatils();
    s1.displaysalarydeatils();
    p1.displayroledeatils();
    return 0;
  }