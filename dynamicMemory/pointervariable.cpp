#include<iostream>
using namespace std;
int main()  
  {
    int *ptr1,*ptr2,*ptr3,avg;
    ptr1=new int;
    ptr2=new int;
    ptr3=new int;
    cout<<"Enter the mark-1"<<endl;
    cin>>*ptr1;
    cout<<"Enter the mark-2"<<endl;
    cin>>*ptr2;
    cout<<"Enter the mark-3"<<endl;
    cin>>*ptr3;
    avg=(*ptr1+*ptr2+*ptr3)/3;
    cout<<"Average is : "<<avg<<endl;

    delete ptr1;
    delete ptr2;
    delete ptr3;
    ptr1=ptr2=ptr3=nullptr;
    if(ptr1 && ptr2 && ptr3)
      {
        cout<<"ptrl not delelte"<<endl;
      }
    else
      {
        cout<<"ptr delete successfull"<<endl;
      }
    return 0;
  }