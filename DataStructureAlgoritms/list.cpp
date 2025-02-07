//You can add and remove elements from both the beginning and at the end of a list, while vectors are generally optimized for adding and removing at the end.

//Unlike vectors, a list does not support random access, meaning you cannot directly jump to a specific index, or access elements by index numbers.
#include<iostream>
#include<list>
using namespace std;
int main()
  {
    int size;
    list<string> cars;
    cout<<"Enter the number of size for storing the cars"<<endl;
    cin>>size;
    string carName;
    cout<<"Enter the Car names"<<endl;
    for(int i=0;i<size;i++)
      {
        
        cin>>carName;
        cars.push_back(carName);
      }

     cout<<"The cars are : "<<endl;
     for(string car :cars)
      {
        cout<<car<<endl;
      }

    cout<<"The size of this is : "<<cars.size()<<endl;

  cout<<"Enter the cars at the back"<<endl;
  cin>>carName;
  cars.push_back(carName);

  cout<<"Enter the cars at the front"<<endl;
  cin>>carName;
  cars.push_front(carName);
  cout<<"*******************************"<<endl;
  for(string car : cars)
    {
      cout<<car<<endl;
    }
  
  int index;
  cout<<"Enter the index to chamge the value"<<endl;
  cin>>index;

  if(index < 0 || index >=cars.size())
    {
      cout<<"Invalid index"<<endl;
    }
  cout<<"Enter the new car name"<<endl;
  cin>>carName;

  auto it=cars.begin();
  advance(it,index);
  *it=carName;

  cout<<"After modification of cars are : "<<endl;
     for(string car :cars)
      {
        cout<<car<<endl;
      }
  

    return 0;
  }