#include<iostream>
#include<string>
using namespace std;
class StringDynamic
  {
    //normal array
    public:
      int size1[10]={1,2,3,4,5};
      StringDynamic()
        {
          cout<<"enter the array elements : "<<endl;
          for(int i=0;i<sizeof(size1)/sizeof(size1[0]);i++)  
            {
              cout<<"The elements are : "<<size1[i]<<endl;
            }
        }
      //Dymanic
      int size;
      string name;
      string *person;
      public:
        void get()
          {
            cout<<"Enter the size"<<endl;
            cin>>size;
            cin.ignore();

            person=new string[size];
            cout<<"Enter the name"<<endl;
            for(int i=0;i<size;i++)
              {
                getline(cin,person[i]);
              }
            cout<<"Person names : "<<endl;
            for(int i=0;i<size;i++)
              {
                cout<<person[i]<<endl;
              }
          }
          void display()
          {
            delete[] person;
            person=nullptr;
            if(person!=nullptr)
              {
                cout<<"Memory have still some value"<<person<<endl;
              }
            else  
              {
                cout<<"Successfully memory relased"<<endl;
              }
          }
  };
int main()
  {
    StringDynamic s1;
    s1.get();
    s1.display();
    return 0;
  }