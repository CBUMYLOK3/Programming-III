#include <iostream>
#include <string>

using namespace std;

int main() {
    for (int i = 0; i < 3; ++i) {
        string str1, str2;
        
        cout << "Enter the first string: ";
        getline(cin, str1);

        cout << "Enter the second string: ";
        getline(cin, str2);

        string result = str1 + str2;

        cout << "Concatenated string: " << result << endl << endl;
    }

    return 0;
}