/* Write a C++ program that takes two integers as input and divides the first by the second.
Implement error handling to catch division by zero and display an appropriate error message.
The program should not terminate unexpectedly if the user enters zero as the divisor.*/

#include <iostream>
#include <stdexcept>// For standard exception types like runtime_error
using namespace std;

class Exception
{
public:
    int numerator, denominator;   // Declare two integers to store user input
    void Input()   //function to get input from user numinator and denominator
    {

        cout << "Enter the numerator" << endl;
        cin >> numerator ;
        cout << "Enter the denominator" << endl;
        cin >> denominator;
    }

    void Display()  // method to perform output and handle error
    {
        try
        {
            if (denominator == 0)  // checking  if the denominatior is zero ,If denominator is zero then it throws an exception
            {
                throw runtime_error("Denominator cannot be zero"); 
            }
            double division =(numerator  / denominator);  //If denominator is not zero, perform the division
            cout << "Result => " << division << endl;
        }
        catch (const runtime_error& e){   //Catch block to handle runtime error
            cout<<e.what()<<endl;      //display the error message
        }

    }
};

int main()
{

    Exception e;  // created d as object division class
    e.Input();
    e.Display();
    return 0;
}