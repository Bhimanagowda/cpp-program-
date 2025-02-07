#include<iostream>
using namespace std;
int main()
{
  int age=0;
  cout<<"Enter the age"<<endl;
  cin>>age;
  if(age >= 18) {
    cout<<"He is eligiable for voting"<<endl;
  }

  int n=10,m=20;
  int max=(n > m) ? n : m;
  cout<<"Maximum is : "<<max<<endl;

  int num;
  cout<<"Enter "<<endl<<"1-for coffee"<<endl<<"2- for tea"<<endl;
  cin>>num;
  if(num == 1){
    cout<<"Your coffee on the way,Thank You";
  }
  else if(num == 2){
    cout<<"Your tea on the way,Thank You";
  }
  else{
    cout<<"Invalid number"<<endl;
  }

  int marks;
  cout<<"Enter the marks"<<endl;
  cin>>marks;
  if(marks >= 80){
    cout<<"First class"<<endl;
  }
  else if(marks >= 60 &&  marks <=80){
    cout<<"second class"<<endl;
  }  
  else if(marks>=45 and marks <=60){
    cout<<"Third class"<<endl;
  }
  else{
    cout<<"Fail"<<endl;
  }
  return 0;
}