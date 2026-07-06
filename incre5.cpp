#include <iostream>
using namespace std;

int main() {
    int num = 10;
    
    cout << "Original number: " << num << endl;
    cout << "Using Pre Increment: " << ++num << endl;  // prints 11
    cout << "Number after increment: " << num << endl; // prints 11
    
    return 0;
}