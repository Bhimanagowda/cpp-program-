#include <iostream>
using namespace std;

// Recursive function to calculate sum of first n numbers
int sum(int n) {
    // Base case: if n is 1, return 1
    if (n == 1) {
        return 1;
    } else {
        // Recursive case: sum of n numbers is n + sum of (n-1) numbers
        return n + sum(n - 1);
    }
}

int main() {
    int n;
    
    cout << "Enter a number: ";
    cin >> n;
    
    // Call the recursive function to find the sum of first n numbers
    cout << "Sum of first " << n << " numbers is: " << sum(n) << endl;
    
    return 0;
}
