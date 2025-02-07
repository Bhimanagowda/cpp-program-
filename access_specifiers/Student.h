#ifndef STUDENT_h
#define STUDENT_h
#include <string>

using namespace std;

class Student {
public:
    string name;
    int age;

public:
    void setstudent1(string name,int age)
    {
      this->name=name;
      this->age=age;
    }
    void displaystudent1()
    {
      cout<<"Name : "<<name<<endl<<"Age : "<<age<<endl;
    }

};

#endif
