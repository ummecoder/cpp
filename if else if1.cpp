#include <iostream>
using namespace std;
int main() {
    int temp;
    cout << "Enter temperature: ";
    cin >> temp;
    
    if (temp < 0) {
        cout << "Bohot thand hai - Baraf";
    }
    else if (temp < 15) {
        cout << "Thand hai - Jacket pehno";
    }
    else if (temp < 30) {
        cout << "Mausam acha hai";
    }
    else {
        cout << "Bohot garmi hai - AC chalao";
    }
    return 0;
}