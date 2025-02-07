#include<iostream>
#include<string>
using namespace std;
class OverloadDemo
  {
    public:
    void concatenate(string a,string b)
      {
        cout<<"Con : "<<a +" "+ b<<endl;
      }
    void concatenate(string a,int  b)
      {
        cout<<"con1 : "<<a + to_string(b)<<endl;
      }
  };
int main()
  {
    OverloadDemo l1;
    l1.concatenate("amith","nirmala");
    l1.concatenate("amith",994588);
    return 0;
  }