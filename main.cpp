#include <iostream>
using namespace std;

// Function prototypes
int add(int a, int b);
int subtract(int a, int b);
int multiply(int a, int b);
double divide(int a, int b);
//Visibile console strings
int main() {
    int num1, num2, choice;
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
    cout << "Choose operation: 1=Add, 2=Subtract, 3=Multiply, 4=Divide: ";
    cin >> choice;
// Swicth acts as the menu allowing us to choose a Function
    switch (choice) {
        case 1: cout << "Result: " << add(num1, num2) << endl; break;
        case 2: cout << "Result: " << subtract(num1, num2) << endl; break;
        case 3: cout << "Result: " << multiply(num1, num2) << endl; break;
        case 4: cout << "Result: " << divide(num1, num2) << endl; break;
        default: cout << "Invalid choice!" << endl;
    }
    return 0;
}
//Mathmateical equations. static_cast handles decimals.
int add(int a, int b) { return a + b; }
int subtract(int a, int b) { return a - b; }
int multiply(int a, int b) { return a * b; }
double divide(int a, int b) { 
    if (b == 0) { cout << "Error: Division by zero!" << endl; return 0; }
    return static_cast<double>(a) / b; 
}
