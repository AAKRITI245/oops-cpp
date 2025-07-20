// Assignment 2
// This program takes the user's age as input and checks if it's within a valid range (1 to 149).
// If the age is invalid, it throws a custom exception `InvalidAgeException`.
// The program demonstrates how to use custom exception classes and handle them using try-catch blocks.

#include <iostream>
#include <exception>
using namespace std;

// Custom exception class for invalid age input
class InvalidAgeException : public exception
{
public:
    // Override the what() function to provide a custom error message
    const char* what() const noexcept override 
    {
        return "Age must be from 1 to 149";
    }
};

int main() {
    int age;

    // Prompt the user to enter their age
    cout << "Enter your age: " << endl;
    cin >> age;

    try {
        // Check if the entered age is outside the valid range
        if (age <= 0 || age >= 150)
        {
            // Throw the custom exception if age is invalid
            throw InvalidAgeException();
        }

        // If age is valid, print the age
        cout << "Your age is: " << age << endl;
    }
    catch (const InvalidAgeException& e)
    {
        // Catch the custom exception and display its message
        cout << e.what() << endl;
    }

    // Program continues after exception handling
    cout << "No problem";

    return 0;
}
