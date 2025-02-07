#include<iostream>
#include<string>
using namespace std;
int main()
  {
    string fname="Amith",lname="nirmala";
    string fullname1=fname.append(" ").append(lname);
    cout<<"Append method-Name is : "<<fullname1<<endl;

    string fullname= fname + " " +lname;
    cout<<"Concatenation method-Name is : "<<fullname<<endl;
    return 0;
  }