#include<iostream>
using namespace std;
class Vehical
  {
    public:
      int no_gear,no_wheels;

    public: 
      void get_vehical(int no_gear,int no_wheels)
        {
          this->no_gear=no_gear;
          this->no_wheels=no_wheels;
        }
       void print_vehical()
        {
          cout<<"Number of gear"<<no_gear<<endl<<"Number of wheels"<<no_wheels<<endl;
        }
  };
int main()
  {
    Vehical cars,bike;
    cars.get_vehical(5,4);
    cars.print_vehical();
    cout<<"*****************"<<endl;
    bike.get_vehical(6,2);
    bike.print_vehical();
    return 0;
  }