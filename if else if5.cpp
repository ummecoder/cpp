#include <iostream>
using namespace std;
int main() {
    int a, b;
    char op;
    cout << "Enter first number, operator, second number: ";
    cin >> a >> op >> b;
    
    if (op == '+') {
        cout << "Result = " << a + b;
    }
    else if (op == '-') {
        cout << "Result = " << a - b;
    }
    else if (op == '*') {
        cout << "Result = " << a * b;
    }
    else if (op == '/') {
        cout << "Result = " << a / b;
    }
    else {
        cout << "Invalid operator";
    }
    return 0;
}