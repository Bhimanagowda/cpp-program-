#include<iostream>
using namespace std;
int main()
  {
    int n=100;
    while(n<=200)
      {
        cout<<n<<" ";
        if(n==150)
          {
            break;
          }
        n=n+10;
      }
    return 0;
  }