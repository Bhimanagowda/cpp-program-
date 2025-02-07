#include <iostream>
using namespace std;

class Box {
private:
    int length;

public:
    Box(int len) : length(len) {}  // Constructor to initialize length
    
    // Friend function declaration
    friend void printLength(Box obj);
};

// Friend function definition
void printLength(Box obj) {
    cout << "The length of the box is: " << obj.length << endl;
}

int main() {
    Box b1(10);
    printLength(b1); // Call the friend function
    return 0;
}
