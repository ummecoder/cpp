#include <iostream>
using namespace std;

int main() {
    int num = 10;
    
    cout << "Original number: " << num << endl;
    cout << "Using Post Decrement: " << num-- << endl;  // prints 10
    cout << "Number after decrement: " << num << endl;  // prints 9
    
    return 0;
}