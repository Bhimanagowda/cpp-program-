#include<iostream>
#include<fstream>
using namespace std;
int main()
  {
    char arr[100];
    cout<<"Enter the Name and age"<<endl;
    cin.getline(arr,100);
    ofstream myfile("amith.txt",ios::app);
    myfile<<arr;
    myfile.close();
    cout<<"File write is performed successfully"<<endl<<endl;

    char arr1[100];
    cout<<"Reading from the file"<<endl;
    ifstream obj("amith.txt");
    obj.getline(arr1,100);
    cout<<"array content "<<arr1<<endl;
    obj.close();
    return 0;
  }

  