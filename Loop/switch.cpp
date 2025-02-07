#include<iostream>
using namespace std;
int main()
{
  int id,num;
  string name,city;
  try{
    cout<<"Enter the id,Name,City and enter the a number between 1-3"<<endl;
    cin>>id;
    cin.ignore();
    getline(cin,name);
    getline(cin,city);
    cin>>num;
    
    switch(num)
    {
      case 1:cout<<"Create a folder"<<endl;
        break;  
      case 2:cout<<"Create a file"<<endl;
        break;        
      case 3:cout<<"Delete a folder"<<endl;
        break;
        default:cout<<"You are a very old person"<<endl;
    }
  }
  catch(const char *mgs)
  {
    cout<<mgs<<endl;
  }
}