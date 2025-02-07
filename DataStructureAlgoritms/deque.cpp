#include<iostream>
#include<deque>
using namespace std;
int main()
  {
    deque<int> number;
    int num,size;
    cout<<"Enter the size to store number"<<endl;
    cin>>size;
    cout<<"Enter the elements"<<endl;
    for(int i=0;i<size;i++) 
      {
        cin>>num;
        number.push_back(num);
      }
    cout<<"index of 0 is : "<<number[0]<<endl;
    while(!number.empty())
      {
        cout<<"The elements are : "<<number.front()<<endl;
        number.pop_front();
      }
    return 0;
  }