#include<iostream>
using namespace std;

class PrincipalStatic
  {
    public:
      int id;
      char std_name[20];
      int totalmarks;
      static char principal_name[20];
      void getstudentdetails();
      void printstudentdetails();
  };

char PrincipalStatic::principal_name[20]="Deepak";
void PrincipalStatic::getstudentdetails()
  {
    cout<<"Enter the id,student_name,totalmarks"<<endl;
    cin>>id>>std_name>>totalmarks;
  }

void PrincipalStatic::printstudentdetails()
  {
    cout<<"ID : "<<id<<endl<<"Student Name : "<<std_name<<endl<<"TotalMarks"<<totalmarks<<endl<<"Principal name : "<<principal_name<<endl;
  }

int main()
  {
   PrincipalStatic student1,student2;
   student1.getstudentdetails();
   student1.printstudentdetails();
   cout<<"*************************************"<<endl;
   student2.getstudentdetails();
   student2.printstudentdetails();
   return 0;
  }