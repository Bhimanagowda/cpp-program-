#include<iostream>
#include<string>
using namespace std;
int main()
  {
     string fruits[3] = {"Apple", "Banana", "Cherry"}; 

    for (int i = 0; i < 3; i++) {
        cout << "Fruit " << i + 1 << ": " << fruits[i] << endl;
    }


    int len=5;
    string *flower=new string[len];
    flower[0]="A";
    flower[1]="B";
    flower[2]="c";
    flower[3]="D";
    flower[4]="E";
    for(int i=0;i<len;i++)
      {
        cout<<"Flower are "<<i+1<<" "<<flower[i]<<endl;
      }
      return 0;
  }