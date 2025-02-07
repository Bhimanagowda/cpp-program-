#include<iostream>
using namespace std;
int main()
  {
    // int a[2][3]={{1,2,3},{4,5,6}};
    int rows,columns;
    cout<<"Enter the size of rows"<<endl;
    cin>>rows;
    cout<<"Enter the size of columns"<<endl;
    cin>>columns;

    int matrix[rows][columns];

    cout<<"Enter the elements"<<endl;
    for(int i=0;i<rows;i++)
      {
        for(int j=0;j<columns;j++)
          {
            cin>>matrix[i][j];
          }
      }

    cout<<"Elements are : "<<endl;
    for(int i=0;i<rows;i++)
      {
        for(int j=0;j<columns;j++)
          {
            cout<<matrix[i][j]<<" ";
          }
        cout<<"\n";
      }
    return 0;
  }