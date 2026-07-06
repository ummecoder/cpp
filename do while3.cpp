#include <iostream>
using namespace std;

int main() {
    int n, i = 1, sum = 0;
    cout << "Enter N: ";
    cin >> n;
    
    do {
        sum = sum + i;  // add
        i++;  // increment
    } while(i <= n);
    
    cout << "Sum of first " << n << " numbers = " << sum << endl;
    
    return 0;
}