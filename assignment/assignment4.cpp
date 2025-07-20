// Assignment
// This program demonstrates throwing and catching multiple types of exceptions using a function.
// Based on user input, it throws an exception of type int, double, string, or runtime_error.
// The program also demonstrates re-throwing an exception to be handled at a higher level.

#include <iostream>
#include <string>
#include <stdexcept>

using namespace std;

// Function that throws different types of exceptions depending on input
void MultipleException(int input) {
    switch (input) {
        case 1:
            throw 42; // Throws an integer exception
        case 2:
            throw 3.14; // Throws a double exception
        case 3:
            throw string("String exception"); // Throws a string exception
        default:
            throw runtime_error("Unknown error"); // Throws a standard runtime_error
    }
}

int main() {
    int input;

    // Ask the user for input
    cout << "Enter a number (1-4): ";
    cin >> input;

    try {
        try {
            // Call the function which may throw an exception
            MultipleException(input);
            cout << "Function executed successfully\n"; // Only runs if no exception is thrown
        }
        catch (int e) {
            // Catch integer exception and display it
            cout << "Caught int exception: " << e << "\n";

            // Re-throw the same exception to be handled by the outer try block
            throw;
        }
        catch (double e) {
            // Catch double exception and display it
            cout << "Caught double exception: " << e << "\n";
        }
        catch (const string& e) {
            // Catch string exception and display it
            cout << "Caught string exception: " << e << "\n";
        }
    }
    catch (int e) {
        // Outer catch block catches the re-thrown integer exception
        cout << "Outer catch: Re-thrown int exception: " << e << "\n";
    }
    catch (...) {
        // Catch-all block for any other unexpected exception types
        cout << "Outer catch: Caught unknown exception\n";
    }

    return 0;
}
