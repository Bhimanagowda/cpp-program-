#include<iostream>
#include<cstring>
using namespace std;
class DynamicConstructor
  {
    char *name;
    int length;
    public:
    DynamicConstructor(const char *a)
      {
        length=strlen(a);
        name=new char[length+1];
        strcpy(name,a);
      }
    void display()
      {
        cout<<name<<endl<<"Length of name is : "<<strlen(name)<<endl;
      }
  };
int main()
  {
    DynamicConstructor s("Amith");
    DynamicConstructor s1("Nirmala");
    s.display();
    s1.display();
    return 0;
  }