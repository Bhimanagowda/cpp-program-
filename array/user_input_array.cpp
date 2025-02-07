#include<iostream>
using namespace std;
int main()
  {
    int n;
    cout<<"Enter the size of array"<<endl;
    cin>>n;

    int a[n];
    
    cout<<"Enter the element to array"<<endl;
    for(int i=0;i<n;i++)
      {
        cin>>a[i];
      }
    cout<<"Display the elements"<<endl;
      for(int i=0;i<n;i++)
      {
        cout<<a[i]<<" ";
      }
  }