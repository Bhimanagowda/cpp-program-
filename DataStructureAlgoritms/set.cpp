#include <iostream>
#include <set>
using namespace std;

int main() {
    set<int> stdnumber; // Ascending order
    set<int, greater<int>> rollnum; // Descending order

    int size, num;
    cout << "Enter the number of elements: ";
    cin >> size;

    cout << "Insert the elements into the set: " << endl;
    for (int i = 0; i < size; i++) {
        cin >> num;
        stdnumber.insert(num);
        rollnum.insert(num);
    }

    cout << "The sorted student numbers (Ascending order): " << endl;
    for (int number : stdnumber) {
        cout << number << " ";
    }
    
    cout << "\nEnter an element to erase: ";
    cin >> num;

    // Erase the element
    stdnumber.erase(num);

    cout << "After removing the element: " << endl;
    for (int number : stdnumber) {
        cout << number << " ";
    }

    // Clear the set
    stdnumber.clear();

    cout << "\nAfter clearing the set: " << endl;
    if (stdnumber.empty()) { // Fix: Correct condition to check if empty
        cout << "Set is empty.";
    } else {
        cout << "Set is not empty.";
    }

    return 0;
}
