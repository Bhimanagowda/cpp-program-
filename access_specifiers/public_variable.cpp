#include<iostream>
#include"Student.h"
using namespace std;

class College
  {
    public:
     Student student; //object od simple.h class
    
    public:
    void setstudent(string name,int age)
    {
      student.name=name;
      student.age=age;
    }
    void displaystudent()
    {
     cout<<"Name : "<<student.name<<endl<<"Age : "<<student.age<<endl; 
    }
    
  };
int main()
  {
    College college;
    college.setstudent("Amith",25);
    college.displaystudent();
    college.setstudent("Deepak",18);
    college.displaystudent();
    return 0;
  }