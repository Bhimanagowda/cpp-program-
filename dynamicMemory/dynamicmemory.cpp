#include<iostream>
#include<string>
using namespace std;
class SimpleDynamic
  {
    //normal array
    public:
      int size1[10]={1,2,3,4,5};
      SimpleDynamic()
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
      int *ptr;
      public:
        void get()
          {
            cout<<"Enter the size"<<endl;
            cin>>size;
            cin.ignore();

            person=new string[size];       

            cout<<"Enter the name in string"<<endl;  
            for(int i=0;i<size;i++)
              {
                getline(cin,person[i]);
              }
            cout<<"Person names : "<<endl;
            for(int i=0;i<size;i++)
              {
                cout<<person[i]<<endl;
              }
          
            ptr=new int[size];
            cout<<"Enter the number"<<endl; 
            for(int i=0;i<size;i++)  
              {
                cin>>ptr[i];
              }
            for(int i=0;i<size;i++)  
              {
                cout<<"The Dynamic array are : "<<ptr[i]<<endl;
              }
          }
         void display()
          {
            delete[] ptr;
            ptr=nullptr;

            delete[] person;
            person=nullptr;

            if (ptr == nullptr) 
            {
            cout << "Successfully memory released for ptr" << endl;
            }
            if (person == nullptr) 
            {
            cout << "Successfully memory released for person" << endl;
            }
            
          }
  };
int main()  
  {
    SimpleDynamic s1;
    s1.get();
    s1.display();
    return 0;
  }