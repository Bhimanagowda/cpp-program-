#include<iostream>
using namespace std;
class Encapsulation
  {
    private:
      string bankaccholder_name;
      string bankAcc_no;
      float balance;
    public:
      Encapsulation(string name,string accno,double initial_amt)
        {
          bankaccholder_name=name;
          bankAcc_no=accno;
          if(initial_amt >= 0)
            {
              balance=initial_amt;
            }
          else
            {
              balance=0.0;
              cout<<"Your balance is : "<<balance<<endl;
            }
        }

      string getbankaccholder_name()
        {
            return bankaccholder_name;
        }
      string getbankAcc_no()
        {
            return bankAcc_no;
        }
      double getbalance()
        {
          return balance;
        }
      void deposite()
        {
          float amount;
          cout<<"Enter the amount to deposite : "<<endl;
          cin>>amount;
          if(amount > 0)
            {
              balance=balance+amount;
            }
          else 
            {
              cout<<"invalid amount deposite"<<endl;
            }
        }
      void withdraw()
        {
          float amount;
          cout<<"Enter the amount to withdraw : "<<endl;
          cin>>amount;
          if(amount >= 0)
            {
              balance=balance-amount;
              cout<<"Current balance : "<<balance<<endl;
            }
          else
            {
              cout<<"Amount insuffient,Your cuurent balance is"<<balance<<endl;  
            }
        }
        void AccountDetails()
          {
            cout<<"Bank accholder_name : "<<bankaccholder_name<<endl<<"Account Number : "<<bankAcc_no<<endl<<"Current balance : "<<balance<<endl;
          }
  };  

int main()
  {
    Encapsulation e1("Amith","987654322111",9000.50);

    e1.AccountDetails();

    e1.deposite();
    cout<<"********************************"<<endl;
    e1.AccountDetails();
    
    e1.withdraw();
    cout<<"********************************"<<endl;
    e1.AccountDetails();
    return 0;
  }
