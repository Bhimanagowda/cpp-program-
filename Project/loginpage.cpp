#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class A {
    virtual void login() = 0;
    virtual void register_user() = 0;
    virtual void forgot_password() = 0;

public:
    void details() {
        int c;
        cout << "\n\t\tWelcome to Login System\t\t" << endl;
        cout << "********************************************************" << endl;
        cout << "Select an option:" << endl;
        cout << "1 -> Login" << endl;
        cout << "2 -> Registration" << endl;
        cout << "3 -> Forgot Password" << endl;
        cout << "4 -> Exit" << endl;
        cout << "Enter your choice: ";
        cin >> c;

        switch (c) {
            case 1:
                login();
                break;
            case 2:
                register_user();
                break;
            case 3:
                forgot_password();
                break;
            case 4:
                cout << "Thank You!\n\n";
                return;
            default:
                cout << "Invalid option. Please try again." << endl;
                details();
        }
    }
};

class B : public A
{
  void login()
  {
    string username,password,u,p;
    cout<<"\t Login Page\t"<<endl;
    cout<<"Enter the username : ";
    cin.ignore();
    getline(cin,username);
    cout<<"Enter the password : ";
    getline(cin,password);

    ifstream input("users1.txt");
    bool success = false;
    while(input >> u >> p)
      { 
        if(u == username && p == password)
          {
            success =true;
            break;
          }
      }
      input.close();

      if(success)
        {
          cout<<"Login successfully"<<endl;
        }
        else
        {
          cout<<"Invalid username and password"<<endl;
          this->details();
        }

  }
  void register_user()
  {
    string username ,password;
    cout<<"\t Registration Page\t"<<endl;
    cout<<"Enter the username : ";
    cin.ignore();
    getline(cin,username);
    cout<<"Enter the password : ";
    getline(cin,password);

    ofstream output("users1.txt",ios::app);
    output<<username<<" "<<password<<endl;
    output.close();

    cout<<"\nRegistration successfully"<<endl;
    this->details();
  }
  void forgot_password()
  {
    string username,u,p;
    cout<<"Enter the username to get a password : ";
    cin.ignore();
    getline(cin,username);

    ifstream input("users1.txt");
    bool found = false;
    while(input >> u >> p)
      {
        if(u == username)
          {
            cout<<"Your password is : "<<p<<endl;
            found=true;
            break;
          }
      }
      input.close();
      if (!found)
      {
        cout<<"username not found"<<endl;
      }
      this->details();
  }
};


int main() {
    B b;
    b.details();
    return 0;
}
