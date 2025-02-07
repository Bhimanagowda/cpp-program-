#include<iostream>
using namespace std; 
class Demoabs
  {
    private:
    int coupon,salary;
    public:
    void setsalary(int fullsal,int addsal)
      {
          this->salary=fullsal+addsal;
      }
    void getsalary()
      {
        cout<<"Employee salary : "<<salary<<endl;
      }
    void setcoupon(int a)
      { 
        this->coupon=a;
      }
    void getcoupon()
      {
        cout<<"coupon : "<<coupon<<endl;
      }
    };
int main()
  {
    Demoabs a;
    a.setsalary(17000,5000);
    a.getsalary();
    a.setcoupon(70);
    a.getcoupon();
    return 0; 
  }