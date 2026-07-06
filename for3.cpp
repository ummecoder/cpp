#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;
    cout << "Enter N: ";
    cin >> n;
    
    for(int i = 1; i <= n; i++) {
        sum = sum + i;  // add each number
    }
    
    cout << "Sum of first " << n << " numbers = " << sum << endl;
    
    return 0;
}