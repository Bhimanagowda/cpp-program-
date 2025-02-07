#include<iostream>
using namespace std;

class Vehical
  {
    public:
      int gear,wheels;
      void setdetails()
        {
          cout<<"Enter the Number of Gears and Wheels"<<endl;
          cin>>gear>>wheels;
        }
      void getdetails()
        {
          cout<<"Number of gears : "<<gear<<endl<<"Number of wheels"<<wheels<<endl;
        }
      void objectfunction(Vehical car,Vehical &bike)
        {
          car.gear++;
          bike.gear++;
          
        }
  };
  int main()
    {
      Vehical car,bike,vehicals;
      cout<<"*****cars details*****"<<endl;
      car.setdetails();
      car.getdetails();
      
      cout<<"*****Bikes details*****"<<endl;
      bike.setdetails();
      bike.getdetails();

      cout<<"Increase function object"<<endl;
      vehicals.objectfunction(car,bike); //pass the object as function arguments

      cout<<"Call ny value"<<endl;
      car.getdetails();
      cout<<"Call ny reference/address"<<endl;
      bike.getdetails();
      return 0;
    }