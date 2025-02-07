#include<iostream>
#include<queue>
using namespace std;
int main()
  {
    queue<string> std;
    std.push("A");
    std.push("B");
    std.push("C");
    std.push("D");
    std.push("E");
      
    queue<string> temp=std;
    while(!temp.empty())
      {
        cout<<"The queue are : "<<temp.front()<<endl;
        temp.pop();
      }
    cout<<"The front element is : "<<std.front()<<endl;
    std.pop();
    cout<<"After pop the element : "<<endl;
    return 0;
  }