#include <iostream>
using namespace std;

// Function Prototype
int greatestCommonFactor(int, int);

int main()
{
    //Declaring the Variables
    int x = 0;
    int y = 0;
    while ((x <= 0 || y <= 0))
    {
        cout << "Enter '-1' for the first number to exit the program" << endl; 
        cout << "Please enter the first number" << endl; // Asking the user to input the first number 
        cin >> x;

        if (x == -1) // If the user enters -1 for the first number, the program will terminate.
        {
            cout << "Program terminated" << endl; 
            return 0;
        }
        if (x < 0) // If x is a negative integer, it will ask the user to enter the number again
        {
            cout << "Cannot use negative integers" << endl;
            cout << "Enter the first number again: ";
            cin >> x;
        }

        cout << "Please enter the second number" << endl; // Asking the user to input the second number
        cin >> y;

        if (y < 0) // If y is a negative integer, it will ask the user to enter the number again
        {
            cout << "Cannot use negative integers" << endl;
            cout << "Enter the second number again: ";
            cin >> y;
        }
    }
    cout << "The greatest common factor between " << x << " and " << y << " is " << greatestCommonFactor(x, y) << endl;// Outputing the greatest common factor

    return 0;
}

int greatestCommonFactor(int c, int d) // Function definition for greatestCommonFactor
{
    if (d == 0)
    {
        return c;
    }
    else
    {
        return greatestCommonFactor(d, c % d);
    }
}// This function is a recursive function to divide the two numbers and get the remainder. 