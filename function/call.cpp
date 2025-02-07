#include<iostream>
using namespace std;
void swap(int *a,int *b)
  {
    *a=*a+*b;
    *b=*a-*b;
    *a=*a-*b;
  }
int main()
  {
    int m=10,n=20;
    cout<<"Before the swapping funtion "<<m<<"  "<<n<<endl;

    swap(&m,&n);

    cout<<"After the swapping funtion "<<m<<"  "<<n<<endl;
    return 0;
  }