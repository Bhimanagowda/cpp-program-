#include<iostream>
using namespace std;
//Call-by-value
void salary_change(int a)
  {
    a=3000;
    cout<<"inside the funtion"<<a<<endl;
  }
//call-by-reference
void salary_change1(int &a)
  {
    a=30000;
    cout<<"inside the funtion"<<a<<endl;
  }
int main()
  {
    cout<<"call-By-value"<<endl;
    int sal=25000;
    salary_change(sal);
    cout<<"outside the funtion"<<sal<<endl;
 
    cout<<"call-By-reference"<<endl;
    salary_change1(sal);
     cout<<"outside the funtion"<<sal<<endl;
    return 0;
  }