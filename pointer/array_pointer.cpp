#include<iostream>
#include<string>
using namespace std;
int main()
  {
    int *ptr;
    int arr[]={3,5,8,2,6,7,0,3};
    ptr=arr;
    for(int i=0;i<8;i++)
      {
        cout<<*ptr<<" ";
        ptr++;
      }
    
    cout<<"\n";

    string array[]={"Amith","Deepak","Raghu","Likith"};
    string *ptr1=array;

    int size=sizeof(array)/sizeof(array[0]);
    cout<<size<<endl;;
    for(int i=0;i<size;i++)
      {
        cout<<*ptr1<<" ";
        ptr1++;
      }
    return 0;

  }