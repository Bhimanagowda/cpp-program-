#include<iostream>
using namespace std;
int main()
  {
    int a[4][4];

    for(int i=0;i<4;i++)
      {
        for(int j=0;j<4;j++)
          {
            a[i][j]=i+j;
          }
      }
    
    for(int i=0;i<4;i++)
      {
        for(int j=0;j<4;j++)
          {
            cout<<a[i][j]<<" ";;
          }
          cout<<endl;
      }
      return 0;
  }