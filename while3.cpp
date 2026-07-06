#include <iostream>
using namespace std;

int main() {
    int i = 5;
    
    cout << "Countdown:" << endl;
    
    while(i >= 1) {  // condition
        cout << i << endl;
        i--;  // decrement
    }
    
    cout << "Blast Off!" << endl;
    
    return 0;
}