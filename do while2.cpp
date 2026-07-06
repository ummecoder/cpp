#include <iostream>
using namespace std;

int main() {
    int i = 10;
    
    cout << "Countdown:" << endl;
    
    do {
        cout << i << endl;
        i--;  // decrement
    } while(i >= 1);
    
    cout << "Happy New Year!" << endl;
    
    return 0;
}