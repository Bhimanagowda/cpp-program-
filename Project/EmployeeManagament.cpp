#include <iostream>
#include <list>
using namespace std;
class Company
{
  list<string> running_projects,holding_projects,coming_projects;
  // string running_pro,holding_pro,coming_pro;
  int no_running_pro,no_holding_pro,no_coming_pro;
public:
int size; 
//normanl fun
void cmpempsize()
{
  cout<<"enter the number of employee : ";
  cin>>size;
  cin.ignore();
}
Company(string name)  //constructor
{
    cout<<"Company name : "<<name<<endl;
}
  void setcmpdetails()
  {
    cout << "Enter the number of projects which are running, holding, and coming" << endl;
    cin >> no_running_pro >> no_holding_pro >> no_coming_pro;
    cin.ignore();
    cout<<"Enter the project name which is running"<<endl;
    for(int i=0;i<no_running_pro;i++)
    {
      string temp_running;
      getline(cin,temp_running);
      running_projects.push_back(temp_running);
    }
    cout<<"Enter the project name which is holding"<<endl;
    for(int i=0;i<no_holding_pro;i++)
    {
      string temp_holding;
      getline(cin,temp_holding);
      holding_projects.push_back(temp_holding);
    }
    cout<<"Enter the project name which is coming"<<endl;
    for(int i=0;i<no_coming_pro;i++)
    {
      string temp_coming;
      getline(cin,temp_coming);
      coming_projects.push_back(temp_coming);
    }
  }
  void getcmpdetails()
  {
    int j=1,a=1,b=1;
    cout<<"Running project are"<<endl;
    for(const string running : running_projects)
      {
        cout<<j++<<"."<<running<<endl;
      }

    cout<<"Holding project are"<<endl;
    for(const string holding : holding_projects)
      {
        cout<<a++<<"."<<holding<<endl;
      }

    cout<<"Coming project are"<<endl;
    for(const string coming : coming_projects)
      {
        cout<<b++<<"."<<coming<<endl;
      }
  }
};
class Employee : public Company
{
  list<string> name;
public:
  Employee(string company_name) : Company(company_name) {}
  void setempdetails()
  {
    try
    {
    cout<<"The Number of employee in compaye is : "<<size<<endl;
    cout << "Enter the name of employees" << endl;
    for (int i = 0; i < size; i++)
    {
      string temp;
      if(!getline(cin,temp) || temp.empty())
      {
        throw runtime_error("invalid employee name input");
      }
      name.push_back(temp);
    }
    }
    catch(const exception &e)
      {
        cout<<"error "<<e.what()<<endl;
      }
  }
  void getempdetails()
  {
    cout << "The names of employees are" << endl;
    int index = 1;
    for (const string employee_name : name)
    {
      cout << index++ << "." << employee_name << endl;
    }
  }
};
int main()
{
  string company_name;
  cout << "Enter the company name" << endl;
  getline(cin,company_name);
  Employee e(company_name);;
  e.cmpempsize();
  e.setempdetails();
  e.setcmpdetails();
  e.getempdetails();
  e.getcmpdetails();
  return 0;
}