#include <iostream>
using namespace std;

class PrincipalStatic {
public:
    static int id;
    static char std_name[20];
    static int totalmarks;
    static char principal_name[20];

    static void getstudentdetails() {
        cout << "Enter the ID, student name, and total marks: ";
        cin >> id >> std_name >> totalmarks;
    }

    static void printstudentdetails() {
        cout << "ID: " << id << endl;
        cout << "Student Name: " << std_name << endl;
        cout << "Total Marks: " << totalmarks << endl;
        cout << "Principal Name: " << principal_name << endl;
    }
};

// Initialize static member variables outside the class
int PrincipalStatic::id = 0;
char PrincipalStatic::std_name[20] = "";
int PrincipalStatic::totalmarks = 0;
char PrincipalStatic::principal_name[20] = "Deepak";

int main() {
    PrincipalStatic::getstudentdetails();
    PrincipalStatic::printstudentdetails();
    cout << "*************************************" << endl;
    PrincipalStatic::getstudentdetails();
    PrincipalStatic::printstudentdetails();
    return 0;
}
