#include<iostream>
#include<queue>
using namespace std;
int main()
  {
    queue<int> number;
    int num,size;
    cout<<"Enter the number of size for store the number"<<endl;
    cin>>size;

    cout<<"Enter the number to store"<<endl;
    for(int i=0;i<size;i++)
      {
        cin>>num;
        number.push(num);
      }

    cout<<"Enter the front elements"<<number.front()<<endl;
    cout<<"Enter the back elements"<<number.back()<<endl;

    cout<<"Enter the front elements"<<endl;
    cin>>num;
    number.pop();
    number.push(num);
 
    cout<<"**********************"<<endl;

    cout<<"Enter the front elements"<<number.front()<<endl;

    while(!number.empty())
      {
        cout<<"The queue push number is : "<<number.front()<<endl;
        number.pop();
        cout<<number.size()<<endl;

      }
      return 0;
  }