#include<iostream>
#include<ctime>
using namespace std;
int main()
  {
    time_t currentTime=time(0);
    cout<<ctime(&currentTime)<<endl;
    return 0;
  }