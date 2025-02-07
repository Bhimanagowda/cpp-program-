#include<iostream>
using namespace std;
class College
  {
    public:
      virtual void getTeacherDetails()=0;
    public:
      virtual void getStudentDetails()=0;

    College()
      {
        cout<<"Defaukt constructor"<<endl;
      }
  };

class Teacher :  public College
  {
    string name,address;
    int salary;
    public:
      void getTeacherDetails() override
        {
          cout<<"Enter the teacher_name,address and salary"<<endl;
          cin>>name>>address>>salary;
        }
      void getStudentDetails() override {}
      void displayTeacher()
        {
          cout<<"Teacher name : "<<name<<endl<<"Address : "<<address<<endl<<"Salary : "<<salary<<endl;
        }
  };

class Student : public College
  {
    string name,result;
    int marks;
    public:
      void getStudentDetails() override
        {
          cout<<"Enter the student_name,marks,result"<<endl;
          cin>>name>>marks>>result;
        }
      void getTeacherDetails() override{}
      void displayStudent()
        {
          cout<<"Student name : "<<name<<endl<<"result : "<<result<<endl<<"marks : "<<marks<<endl;
        }
  };
int main()
  {
    Teacher t1;
    Student s1;
    t1.getTeacherDetails();
    t1.displayTeacher();

    s1.getStudentDetails();
    s1.displayStudent();
    return 0;
  }