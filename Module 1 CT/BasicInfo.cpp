#include <iostream>
#include <string>

using namespace std;

int main() {
    string firstName, lastName, streetAddress, city, zipCode;

    cout << "Enter your first name: ";
    getline(cin, firstName);

    cout << "Enter your last name: ";
    getline(cin, lastName);

    cout << "Enter your street address: ";
    getline(cin, streetAddress);

    cout << "Enter your city: ";
    getline(cin, city);

    cout << "Enter your zip code: ";
    getline(cin, zipCode);

    cout << "\n\n";
    cout << "First Name: " << firstName << endl;
    cout << "Last Name: " << lastName << endl;
    cout << "Street Address: " << streetAddress << endl;
    cout << "City: " << city << endl;
    cout << "Zip Code: " << zipCode << endl;

    return 0;
}