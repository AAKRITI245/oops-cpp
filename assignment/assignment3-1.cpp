#include <iostream>
#include <string>
#include <stdexcept>

using namespace std;

int main() {
    int number;
    string text;

    try {
        // ask user to enter an integer
        cout << "Enter an integer: ";
        cin >> number;

        // Check if the entered integer is negative
        if (number < 0) {
            // If negative, throw an exception with a message
            throw invalid_argument("Negative integer is not allowed");
        }

        // Clear the input buffer to avoid issues with getline after cin
        cin.ignore();

        // Prompt the user to enter a string
        cout << "Enter a string: ";
        getline(cin, text);

        // Check if the entered string is empty
        if (text.empty()) {
            // If empty, throw an exception with a message
            throw invalid_argument("Empty string is not allowed");
        }

        // If both inputs are valid, display them
        cout << "Valid input received:\n";
        cout << "Number: " << number << "\n";
        cout << "String: " << text << "\n";
    }
    catch (const invalid_argument& e) {
        // Catch and handle any invalid_argument exceptions (like negative integer or empty string)
        cout << "Error: " << e.what() << "\n";
    }
    catch (...) {
        // Catch-all handler for any other unexpected exceptions
        cout << "Error: An unexpected error occurred\n";
    }

    return 0;
}
