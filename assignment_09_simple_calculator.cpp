// =============================================================================
// PROGRAMMING FUNDAMENTALS — Assignment 9
// =============================================================================
//
// TASK: Console-Based Simple Calculator
//
// Build a calculator program that runs in the console and performs basic
// arithmetic operations based on the user's input.
//
// -----------------------------------------------------------------------------
// OPERATIONS YOUR CALCULATOR MUST SUPPORT
// -----------------------------------------------------------------------------
//
//   1. Addition          ( + )    e.g.  10 + 3  =  13
//   2. Subtraction       ( - )    e.g.  10 - 3  =  7
//   3. Multiplication    ( * )    e.g.  10 * 3  =  30
//   4. Division          ( / )    e.g.  10 / 3  =  3.33
//   5. Modulus           ( % )    e.g.  10 % 3  =  1  (remainder)
//   6. Exponentiation    ( ^ )    e.g.  2 ^ 8   =  256
//   7. Quit
//
// -----------------------------------------------------------------------------
// HOW THE MENU SHOULD LOOK
// -----------------------------------------------------------------------------
//
//   ============================
//        SIMPLE CALCULATOR
//   ============================
//   1. Addition
//   2. Subtraction
//   3. Multiplication
//   4. Division
//   5. Modulus
//   6. Exponentiation
//   7. Quit
//   Select an operation (1-7):
//
// -----------------------------------------------------------------------------
// EXPECTED INTERACTION EXAMPLE
// -----------------------------------------------------------------------------
//
//   Select an operation (1-7): 4
//   Enter first number : 10
//   Enter second number: 3
//   Result: 10 / 3 = 3.33
//
//   Select an operation (1-7): 4
//   Enter first number : 5
//   Enter second number: 0
//   Error: Cannot divide by zero.
//
//   Select an operation (1-7): 7
//   Goodbye!
//
// -----------------------------------------------------------------------------
// REQUIREMENTS
// -----------------------------------------------------------------------------
// - Each arithmetic operation MUST be written as its own function.
// - Use a loop so the calculator keeps running until the user selects Quit.
// - Division by zero must be caught and handled with a clear error message
//   (do NOT let the program crash).
// - Use fixed and setprecision(2) to display results to 2 decimal places.
// - Handle invalid menu choices gracefully.
// - For exponentiation use a loop or the pow() function from <cmath>.
//

// =============================================================================
// YOUR CODE BELOW — remove the // symbols from the scaffold and fill it in
// =============================================================================

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

void addition();
void subtraction();
void multiplication();
void division();
void modulus();
void exponentiation();

int main()
{
    int choice;

    do
    {
        cout << "\n============================\n";
        cout << "     SIMPLE CALCULATOR\n";
        cout << "============================\n";
        cout << "1. Addition\n";
        cout << "2. Subtraction\n";
        cout << "3. Multiplication\n";
        cout << "4. Division\n";
        cout << "5. Modulus\n";
        cout << "6. Exponentiation\n";
        cout << "7. Quit\n";
        cout << "Select an operation (1-7): ";
        cin >> choice;

        switch (choice)
        {
            case 1:
                addition();
                break;

            case 2:
                subtraction();
                break;

            case 3:
                multiplication();
                break;

            case 4:
                division();
                break;

            case 5:
                modulus();
                break;

            case 6:
                exponentiation();
                break;

            case 7:
                cout << "Goodbye!" << endl;
                break;

            default:
                cout << "Invalid choice." << endl;
        }

    } while (choice != 7);

    return 0;
}

void addition()
{
    double a, b;

    cout << "Enter first number: ";
    cin >> a;

    cout << "Enter second number: ";
    cin >> b;

    cout << fixed << setprecision(2);
    cout << "Result: " << a << " + " << b << " = " << a + b << endl;
}

void subtraction()
{
    double a, b;

    cout << "Enter first number: ";
    cin >> a;

    cout << "Enter second number: ";
    cin >> b;

    cout << fixed << setprecision(2);
    cout << "Result: " << a << " - " << b << " = " << a - b << endl;
}

void multiplication()
{
    double a, b;

    cout << "Enter first number: ";
    cin >> a;

    cout << "Enter second number: ";
    cin >> b;

    cout << fixed << setprecision(2);
    cout << "Result: " << a << " * " << b << " = " << a * b << endl;
}

void division()
{
    double a, b;

    cout << "Enter first number: ";
    cin >> a;

    cout << "Enter second number: ";
    cin >> b;

    if (b == 0)
    {
        cout << "Error: Cannot divide by zero." << endl;
        return;
    }

    cout << fixed << setprecision(2);
    cout << "Result: " << a << " / " << b << " = " << a / b << endl;
}

void modulus()
{
    int a, b;

    cout << "Enter first number: ";
    cin >> a;

    cout << "Enter second number: ";
    cin >> b;

    if (b == 0)
    {
        cout << "Error: Cannot divide by zero." << endl;
        return;
    }

    cout << "Result: " << a << " % " << b << " = " << a % b << endl;
}

void exponentiation()
{
    double base, exponent;

    cout << "Enter base: ";
    cin >> base;

    cout << "Enter exponent: ";
    cin >> exponent;

    cout << fixed << setprecision(2);
    cout << "Result: " << base << " ^ " << exponent << " = " << pow(base, exponent) << endl;
}

