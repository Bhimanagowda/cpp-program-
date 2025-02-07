#include<iostream>
using namespace std;
class Rbi
  {
    public:
    int interest=2;
  };
class Sbi:public Rbi
  {
    public:
    int interest=3;
  };
class Canara:public Rbi
  {
    public:
    int interest=5;
  };
int main()
  {
    Canara c;
    Sbi s;
    cout<<"canara bank rate of interest"<<c.interest<<endl;
    cout<<"Sbi bank rate of interest"<<s.interest<<endl;;

    cout<<"Rbi rate of interest from canara bank "<<c.Rbi::interest<<endl;
    cout<<"Rbi rate of interest from Sbi bank "<<s.Rbi::interest<<endl;;
    return 0;
  }