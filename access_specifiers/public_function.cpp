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
      student.setstudent1(name,age);
    }
    void displaystudent()
    {
      student.displaystudent1();
    }
    

    void setstd(string name,int age)
    {
      
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