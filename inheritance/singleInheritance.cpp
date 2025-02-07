#include<iostream>
#include<string>
using namespace std;
class Teacher
  {
      string name,classes;
    public:
      void getTeacherdetails()
        {
          cout<<"Enter the Teacher name and classes ; "<<endl;
          getline(cin,name);
          getline(cin,classes);
        }
      void displayTeacherdeatils()
        {
          cout<<"*****Teacher Details******"<<endl;
          cout<<"Teacher name : "<<name<<endl<<"classes : "<<classes<<endl;
        }

  };
class Student : public Teacher
  {
    string name,stdclasses,subject;
    string result;
    int marks1,marks2,marks3,total;
    float average;
    public:
      void getstudentDetails()
        {
          cout<<"Enter the name,class,subject"<<endl;
          getline(cin,name);
          getline(cin,stdclasses);
          getline(cin,subject);
          cout<<"Enter the three subject marks"<<endl;
          cin>>marks1>>marks2>>marks3;   

          total=marks1+marks2+marks3;
          average=total/3.0;
          calculateresult();
        }

      void calculateresult()
        {
          if(average > 35)
            {
              result="pass";
            }
            else
            {
              result="fail";
            }
        }

      void displayStudentDetails()
        {
          cout<<"*****Student Details******"<<endl;
          cout<<"Student name : "<<name<<endl<<",Classes : "<<stdclasses<<endl<<"and subject  : "<<subject<<endl;

          cout<<"*****Student marks******"<<endl;
          cout<<"Marks1 : "<<marks1<<endl<<"Marks1 : "<<marks2<<endl<<"Marks1 : "<<marks3<<endl;

          cout<<"The total marks is : "<<total<<endl<<"The Average is : "<<average<<endl<<"The result is : "<<result<<endl;
        }
  };
int main()
  {
    Student s1;
    s1.getTeacherdetails();
    s1.displayTeacherdeatils();
    s1.getstudentDetails();
    s1.displayStudentDetails();
    return 0;
  }