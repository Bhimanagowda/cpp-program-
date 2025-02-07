#include<iostream>
using namespace std;
class DemoClass
{
  public:
  string name="Amith",address1;
  int age=25,id1;
  DemoClass(int id,string address)
    {
      this->id1=id;
      this->address1=address;
      cout<<id1<<address1;
    }
  
};
int main()  
  {
    string address;
    int id;
    cout<<"ENter the Id and Address "<<endl;
    cin>>id>>address;
    DemoClass c(id,address);
    cout<<c.name<<c.age<<endl;
    return 0;
  }