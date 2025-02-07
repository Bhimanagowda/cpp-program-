#include<iostream>
using namespace std;
class Vehical
  {
    public:
      int no_gear,no_wheels;

      void get_vehical()
        {
          cout<<"Enter the number of Gear & Number of wheels"<<endl;
          cin>>no_gear>>no_wheels;
        }
       void print_vehical()
        {
          cout<<"Number of gear : "<<no_gear<<endl<<"Number of wheels :  "<<no_wheels<<endl;
        }
  };
int main()
  {
    Vehical cars,bike;
    cout<<"***Car Details****"<<endl;
    cars.get_vehical();
    cars.print_vehical();

    cout<<endl<<"*************************************"<<endl;

    cout<<endl<<"***Bike Details****"<<endl;
    bike.get_vehical();
    bike.print_vehical();
    return 0;
  }