#include <iostream>
using namespace std;
int main() {
    int price;
    cout << "Enter bill amount: ";
    cin >> price;
    
    if (price >= 1000) {
        cout << "10% discount milega. Final price: " << price * 0.9;
    }
    else {
        cout << "No discount. Final price: " << price;
    }
    return 0;
}