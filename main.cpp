#include <iostream>
using namespace std;

// Function prototypes
double add(double a, double b);
double subtract(double a, double b);
double multiply(double a, double b);
double divide(double a, double b);

int main() {
    double num1, num2; // Changed to double for decimal support
    int choice;

    cout << "Enter first number: ";
    while (!(cin >> num1)) { // Check for invalid input
        cout << "Invalid input. Please enter a number: ";
        cin.clear(); // Clear fail state
        cin.ignore(10000, '\n'); // Discard bad input
    }

    cout << "Enter second number: ";
    while (!(cin >> num2)) {
        cout << "Invalid input. Please enter a number: ";
        cin.clear();
        cin.ignore(10000, '\n');
    }

    cout << "Choose operation: 1=Add, 2=Subtract, 3=Multiply, 4=Divide: ";
    while (!(cin >> choice) || choice < 1 || choice > 4) {
        cout << "Invalid choice. Enter 1, 2, 3, or 4: ";
        cin.clear();
        cin.ignore(10000, '\n');
    }

    switch (choice) {
        case 1: cout << "Result: " << add(num1, num2) << endl; break;
        case 2: cout << "Result: " << subtract(num1, num2) << endl; break;
        case 3: cout << "Result: " << multiply(num1, num2) << endl; break;
        case 4: cout << "Result: " << divide(num1, num2) << endl; break;
        default: cout << "Invalid choice!" << endl; // Fallback (shouldn't hit with validation)
    }
    return 0;
}

double add(double a, double b) { return a + b; }
double subtract(double a, double b) { return a - b; }
double multiply(double a, double b) { return a * b; }
double divide(double a, double b) {
    if (b == 0) { cout << "Error: Division by zero!" << endl; return 0; }
    return a / b;
}
