#include<iostream>
#include<stack>
using namespace std;
int main()
  {
    stack<string> employeename;
    employeename.push("Amith");
    employeename.push("Deepak");
    employeename.push("Rahul");
    employeename.push("Ravi");  
    employeename.push("Rajesh");
    employeename.push("Ramesh");

    stack<string> tempemp=employeename;

    while(!tempemp.empty())
      {
        cout<<"The stack are : "<<tempemp.top()<<endl;
        tempemp.pop();
      }
    
    cout<<"The top element is : "<<employeename.top()<<endl;
    employeename.pop();

    cout<<"After pop the element : "<<endl;
    while(!employeename.empty())
      {
        cout<<"The stack are : "<<employeename.top()<<endl;
        break;
      }
      return 0;
  }
