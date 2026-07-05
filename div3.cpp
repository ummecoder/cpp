#include <iostream>
using namespace std;
int main()
{
    int a, b, quotient, remainder;
    cout << "Enter dividend: ";
    cin >> a;
    cout << "Enter divisor: ";
    cin >> b;
    quotient = a / b;
    remainder = a % b;
    cout << "Quotient: " << quotient << endl;
    cout << "Remainder: " << remainder << endl;
    return 0;
}