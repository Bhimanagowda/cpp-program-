#include<iostream>
using namespace std;
int main(){
  int num[]={10,10,10,5,5,7,7,7,7};
  int count_10=0,count_5=0,count_7=0,i;
  for(i=0;i < sizeof(num) / sizeof(num[0]);i++)
  {
    if(num[i]== 10)
    {
      count_10+=1;
    }
    else if(num[i]== 5)
    {
      count_5+=1;
    }
    else if(num[i]== 7)
    {
      count_7+=1;
    }
    else{
      cout<<""<<endl;
    }
    
  }
  cout<<"The count of 10 in the array is: " <<count_10<<endl;
  cout<<"The count of 5 in the array is: " <<count_5<<endl;
  cout<<"The count of 7  in the array is: " <<count_7<<endl;

  // int currval=0,val=0;
  // if(cin >> currval){
  //   int count=1;
  //   while(cin >> val){
  //     if(currval == val){
  //       ++count;
  //     }
  //     else{
  //       cout<<currval<<"occurs"<<count<<"times"<<endl;
  //       currval=val;
  //       count=1;
  //     }
  //   }
  //   cout<<currval<<"occurs"<<count<<"times"<<endl;
  // }
  return 0;
}