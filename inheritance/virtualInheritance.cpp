#include<iostream>
#include<string>
using namespace std;
class CentralGov
  {
      char aadhar[17];
    public:
      void getCentralGovdetails()
        {
          cout<<"Enter the aadhara number : "<<endl;
          cin>>aadhar;
        }
      void displayCentralGovdeatils()
        {
          cout<<"aadhar number : "<<aadhar<<endl;
        }

  };

class StateGov :  public CentralGov
  {
    char pincard[11];
    public:
      void getStateGovdetails()
        {
          cout<<"Enter the pincard number : "<<endl;
          cin>>pincard;
        }
      void displayStateGovdeatils()
        {
          cout<<"pincard number : "<<pincard<<endl;
        }
  };

class Person : public CentralGov, public StateGov
  {
    string name,address;
    public:
      void getPersondetails()
        {
          cout<<"Enter the person name and address ; "<<endl;
          cin>>name>>address;
        }
      void displayPersondeatils()
        {
          cout<<"name : "<<name<<endl<<"Address : "<<address<<endl;;
        }
      // using CentralGov :: getCentralGovdetails;
      // using CentralGov  :: displayCentralGovdeatils;
  };
int main()
  {
    Person p1;
    p1.getCentralGovdetails();
    p1.getStateGovdetails();
    p1.getPersondetails();
    cout<<endl;
    p1.displayPersondeatils();
    p1.displayCentralGovdeatils();
    p1.displayStateGovdeatils();
    return 0;
  }
