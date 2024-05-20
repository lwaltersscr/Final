// Final Problem 1: Basic math caluclator

#include <iostream>
#include <string>
#include <sstream>
#include <cmath>
#include <algorithm>
#include <cctype>

using namespace std;

// Function to ask for a single double input
double askForNumber(const string& prompt) {
    double num;
    cout << prompt;
    cin >> num;
    return num;
}

// Function to perform addition
double add(double num1, double num2) {
    return num1 + num2;
}

// Function to perform subtraction
double subtract(double num1, double num2) {
    return num1 - num2;
}

// Function to perform multiplication
double multiply(double num1, double num2) {
    return num1 * num2;
}

// Function to perform division
double divide(double num1, double num2) {
    if (num2 != 0)
        return num1 / num2;
    else {
        cout << "Error: Division by zero" << endl;
        return NAN;
    }
}

// Function to perform modulus
int mod(int num1, int num2) {
    if (num2 != 0)
        return num1 % num2;
    else {
        cout << "Error: Modulus by zero" << endl;
        return NAN;
    }
}

// Function to perform exponentiation
double exponentiate(double base, double exponent) {
    return pow(base, exponent);
}

// Function to display result
void displayResult(const string& operation, double result) {
    cout << "Result of " << operation << ": " << result << endl;
}

// Function to handle basic arithmetic operations
void performBasicOperation(char operation, double num1, double num2) {
    double result;
    switch (operation) {
        case '+':
            result = add(num1, num2);
            displayResult("addition", result);
            break;
        case '-':
            result = subtract(num1, num2);
            displayResult("subtraction", result);
            break;
        case '*':
            result = multiply(num1, num2);
            displayResult("multiplication", result);
            break;
        case '/':
            result = divide(num1, num2);
            if (!isnan(result)) {
                displayResult("division", result);
            }
            break;
        case '%':
            result = mod(static_cast<int>(num1), static_cast<int>(num2));
            if (!isnan(result)) {
                displayResult("modulus", result);
            }
            break;
        case '^':
            result = exponentiate(num1, num2);
            displayResult("exponentiation", result);
            break;
        default:
            cout << "Invalid operation" << endl;
            break;
    }
}

// Function to handle single-argument mathematical functions
void performFunctionOperation(const string& operation, double num) {
    double result;
    if (operation == "sin") {
        result = sin(num);
    } else if (operation == "asin") {
        result = asin(num);
    } else if (operation == "cos") {
        result = cos(num);
    } else if (operation == "acos") {
        result = acos(num);
    } else if (operation == "tan") {
        result = tan(num);
    } else if (operation == "atan") {
        result = atan(num);
    } else if (operation == "sqrt") {
        if (num >= 0) {
            result = sqrt(num);
        } else {
            cout << "Error: Square root of negative number" << endl;
            return;
        }
    } else if (operation == "ceil") {
        result = ceil(num);
    } else if (operation == "abs") {
        result = abs(num);
    } else if (operation == "floor") {
        result = floor(num);
    } else if (operation == "log") {
        if (num > 0) {
            result = log(num);
        } else {
            cout << "Error: Logarithm of non-positive number" << endl;
            return;
        }
    } else if (operation == "log10") {
        if (num > 0) {
            result = log10(num);
        } else {
            cout << "Error: Logarithm of non-positive number" << endl;
            return;
        }
    } else if (operation == "log2") {
        if (num > 0) {
            result = log2(num);
        } else {
            cout << "Error: Logarithm of non-positive number" << endl;
            return;
        }
    } else if (operation == "round") {
        result = round(num);
    } else {
        cout << "Invalid function operation" << endl;
        return;
    }
    displayResult(operation, result);
}

// Function to handle two-argument mathematical functions
void performFunctionOperation2(const string& operation, double num1, double num2) {
    double result;
    if (operation == "atan2") {
        result = atan2(num1, num2);
    } else if (operation == "max") {
        result = max(num1, num2);
    } else if (operation == "min") {
        result = min(num1, num2);
    } else {
        cout << "Invalid function operation" << endl;
        return;
    }
    displayResult(operation, result);
}

int main() {
    string input, repeat;

    do {
        // Prompt user to enter the equation
        cout << "Enter the problem to solve (e.g., 3+5, sin(0.5), max(3,5)): ";
        getline(cin, input);

        // Remove spaces from the input for easier parsing
        input.erase(remove_if(input.begin(), input.end(), ::isspace), input.end());

        // Check for basic operations
        size_t pos;
        char operation;
        if ((pos = input.find('+')) != string::npos) {
            operation = '+';
        } else if ((pos = input.find('-')) != string::npos) {
            operation = '-';
        } else if ((pos = input.find('*')) != string::npos) {
            operation = '*';
        } else if ((pos = input.find('/')) != string::npos) {
            operation = '/';
        } else if ((pos = input.find('%')) != string::npos) {
            operation = '%';
        } else if ((pos = input.find('^')) != string::npos) {
            operation = '^';
        } else {
            operation = '\0';
        }

        if (operation != '\0') {
            // Extract operands and perform basic operation
            double num1 = stod(input.substr(0, pos));
            double num2 = stod(input.substr(pos + 1));
            performBasicOperation(operation, num1, num2);
        } else {
            // Check for function operations
            if (input.find("atan2") != string::npos) {
                // Extract and perform atan2 operation
                size_t start = input.find('(');
                size_t comma = input.find(',');
                size_t end = input.find(')');
                double num1 = stod(input.substr(start + 1, comma - start - 1));
                double num2 = stod(input.substr(comma + 1, end - comma - 1));
                performFunctionOperation2("atan2", num1, num2);
            } else if (input.find("max") != string::npos || input.find("min") != string::npos) {
                // Extract and perform max/min operation
                string operation = input.substr(0, 3);
                size_t start = input.find('(');
                size_t comma = input.find(',');
                size_t end = input.find(')');
                double num1 = stod(input.substr(start + 1, comma - start - 1));
                double num2 = stod(input.substr(comma + 1, end - comma - 1));
                performFunctionOperation2(operation, num1, num2);
            } else {
                // Extract and perform single-argument function operation
                string operation = input.substr(0, input.find('('));
                size_t start = input.find('(');
                size_t end = input.find(')');
                double num = stod(input.substr(start + 1, end - start - 1));
                performFunctionOperation(operation, num);
            }
        }

        // Prompt user to solve another problem or exit
        cout << "Would you like to solve another problem? (y/n): ";
        cin >> repeat;
        cin.ignore(); // Ignore the newline character left in the input buffer
    } while (repeat == "y" || repeat == "Y");

    cout << "Thanks for using the calculator!" << endl;

    return 0;
}
