#include<iostream>
#include<string.h>
using namespace std;
int main()
  { int size=35;
    int a[35];
   
   for(int i=0;i<7;i++)
     {
       for(int j=0;j<6;j++)
         {
           if(i==j)
             {
               a[i]=1;
             }
           else
             {
               a[j]=0;
               j++;
             }
         }
     }
     for(int k=0;k<size;k++)
       {
         cout<<a[k]<<" ";
       }
       cout<<endl;
      return 0;
  }