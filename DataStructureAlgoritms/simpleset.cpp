#include<iostream>
#include<set>
using namespace std;
int main()
  {
    set<int> id;
    set<int,greater<int>> rollnum;
    int size,idnum,rollnumber;
    cout<<"Enter the size for store the elements"<<endl;
    cin>>size;

    cout<<"Enter the id and roll number"<<endl;
    for(int i=0;i<size;i++)
      {
        cin>>idnum>>rollnumber;
        id.insert(idnum);
        rollnum.insert(rollnumber);
      }
    cout<<"The id are : "<<endl;
    for(auto &entry : id)
      {
        cout<<entry<<" ";
      }
    cout<<"Enter the element to be earsed"<<endl;
    cin>>idnum;
    id.erase(idnum);  

    cout<<"After removing the element : "<<endl;
    for(auto &entry : id)
      {
        cout<<entry<<" ";
      }
      return 0;
  }