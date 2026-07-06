#include <iostream>
using namespace std;

int main() {
    int num, i = 1;
    cout << "Enter a number: ";
    cin >> num;
    
    cout << "Table of " << num << ":" << endl;
    
    while(i <= 10) {
        cout << num << " x " << i << " = " << num * i << endl;
        i++;  // increment
    }
    
    return 0;
}