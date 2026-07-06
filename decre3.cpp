#include <iostream>
using namespace std;

int main() {
    cout << "Countdown from 5 to 1:" << endl;
    
    for(int i = 5; i >= 1; i--) {  // i-- decrements each time
        cout << i << endl;
    }
    
    cout << "Blast Off!" << endl;
    
    return 0;
}