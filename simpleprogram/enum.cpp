#include<iostream>
using namespace std;
int main()
{
  enum name{amith,Deepak,Ranganth,Suresh};
  enum month{jan,feb,mar,apr,may,jun,jul,aug,sep,oct,nov,dec};
 
  for(int i=jan;i<=dec;i++)
  {
    cout<<i<<endl;
  }
  name captain=Deepak;
  if (captain==Deepak)
  {
    cout<<"Deepak is the captain of the team"<<endl;
  }
  else
  {
    cout<<"Deepak is not the captain of the team"<<endl;
  }
  return 0;
}