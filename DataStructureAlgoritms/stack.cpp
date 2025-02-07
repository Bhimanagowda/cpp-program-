//A stack stores multiple elements in a specific order, called LIFO. elements in the stack are not accessed by index numbers. Since elements are added and removed from the top, you can only access the element at the top of the stack.
#include<iostream>
#include<stack>
using namespace std;
int main()
  {
    stack<string> employeename;
    int size;
    string empName;

    cout<<"Enter the number of size for store the empname"<<endl;
    cin>>size;

    cout<<"Enter the EmpName"<<endl;
    for(int i=0;i<size;i++)
      {
        cin>>empName;
        employeename.push(empName);
      }

    cout<<"Enter one more element  : "<<endl;
    cin>>empName;
    employeename.push(empName);

    cout<<endl<<employeename.top()<<endl;
    
    cout<<"The empolyee are : "<<endl;
    while(!employeename.empty())
      {
        cout<<"The stack are : "<<employeename.top()<<endl;
        employeename.pop();
        // cout<<employeename.size()<<endl;
      }
      return 0;
  }