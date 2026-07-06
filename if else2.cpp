#include <iostream>
using namespace std;
int main() {
    int a, b;
    cout << "Enter 2 numbers: ";
    cin >> a >> b;
    
    if (a > b) {
        cout << a << " bada hai";
    }
    else {
        cout << b << " bada hai";
    }
    return 0;
}