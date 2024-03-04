#include <iostream>
using namespace std;

int main() {
    int value1, value2, value3;

    // Assign values from the user
    cout << "Enter the first number: ";
    cin >> value1;

    cout << "Enter the second number: ";
    cin >> value2;

    cout << "Enter the third number: ";
    cin >> value3;

    // Creating pointers and assigning dynamic memory
    int *ptr1 = new int(value1);
    int *ptr2 = new int(value2);
    int *ptr3 = new int(value3);

    // Displaying the contents of variables and pointers
    cout << "\nContents of variables:" << endl;
    cout << "Value 1: " << value1 << endl;
    cout << "Value 2: " << value2 << endl;
    cout << "Value 3: " << value3 << endl;

    cout << "\nContents of pointers:" << endl;
    cout << "Pointer 1: " << *ptr1 << endl;
    cout << "Pointer 2: " << *ptr2 << endl;
    cout << "Pointer 3: " << *ptr3 << endl;

    // Deleting dynamically allocated memory to prevent memory leaks
    delete ptr1;
    delete ptr2;
    delete ptr3;

    return 0;
}
