#include<iostream>
#include <string> // Required for std::string
using namespace std;
class SimpleTryCatch
  {
    string name;
    int age;
      public:
        void details()
          {
             try
              { 
                 cout<<"Enter the Person_name and and His Age"<<endl;
                 cin>>name>>age;
                 if(age>24)
                   {
                     cout<<"Can be drink"<<endl;
                   }
                 else
                   {
                     throw ",so Age is less than 24,can't drink";
                   }
              }
              catch(const char* e)
                {
                  cout<<"The person age is "<<age<<e<<endl;
                }
          }
  };
int main()
  {
    SimpleTryCatch s1;
    s1.details();
  }