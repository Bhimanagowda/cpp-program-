#include<iostream>
using namespace std;
int main()
  {
    int m,n,sum=0;
    cout<<"Enter the two number m n"<<endl;
    cin>>m>>n;
    int *ptr1=&m;
    int *ptr2=&n;
    (*ptr1)++;
    (*ptr2)--;
    cout<<"ptr1 :"<<*ptr1<<endl<<"ptr2 :"<<*ptr2<<endl;
    return 0; 
  }