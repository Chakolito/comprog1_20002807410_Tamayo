#include <iostream>
using namespace std;

int main() {
    char Operation,fail;
    double a, b, result;

    cout << "Enter an Operator (+, -, *, /): ";
    cin >> Operation;

    cout << "Enter two numbers: ";
    cin >> a >> b;


    switch (Operation) {
    case '+':
        result = a + b;
        break;
    case '-':
        result = a - b;
        break;
    case '*':
        result = a * b;
        break;
    case '/':
        result = a / b;
        break;

    default:
        cout << "Error! Operator is not correct";
        result = fail;
    }

    if (result != fail)
        cout << "Result: " << result;
    return 0;
}