#include <iostream>
using namespace std;

int main() {
    int a = 5;
    int b = 5;
    
    cout << "Post Decrement Example:" << endl;
    cout << "Value printed: " << a-- << endl;  // prints 5
    cout << "Value after: " << a << endl;      // prints 4
    
    cout << "\nPre Decrement Example:" << endl;
    cout << "Value printed: " << --b << endl;  // prints 4
    cout << "Value after: " << b << endl;      // prints 4
    
    return 0;
}