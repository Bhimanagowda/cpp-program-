#include <iostream>
#include <vector>
#include <fstream>
using namespace std;
int main()
{
  int size, age;
  string name;

  cout << "Enter the size of array" << endl;
  cin >> size;
  cin.ignore();

  vector<string> arr(size);

  ofstream myfile("new_file.txt", ios::app);
  if(!myfile)
  {
    cout << "File not created" << endl;
  }
  else
  {
    cout << "File created successfully" << endl;
  }

  cout << "Enter the Name and age" << endl;
  for(int i=0;i<size;i++)
  {
    cout<<"Enter the name and age "<<i+1<<endl;
    getline(cin, name);
    cin >> age;
    cin.ignore();
    arr[i]=name+" "+to_string(age);
    myfile << arr[i] << endl;
  }
  myfile.close();
  cout<<"Data written successfully"<<endl;

  ifstream obj("new_file.txt");
  if(!obj)
  {
    cout << "File not opened" << endl;
  }
  else
  {
    cout << "File opened successfully" << endl;
  }
  cout << "Reading from the file" << endl;
  string line;
  while(getline(obj, line))
  {
    cout << line << endl;
  }
  return 0;
}