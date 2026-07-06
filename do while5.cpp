#include <iostream>
using namespace std;

int main() {
    int n, i = 1;
    long long factorial = 1;  // to store big numbers
    
    cout << "Enter a number: ";
    cin >> n;
    
    do {
        factorial = factorial * i;  // multiply
        i++;  // increment
    } while(i <= n);
    
    cout << "Factorial of " << n << " = " << factorial << endl;
    
    return 0;
}