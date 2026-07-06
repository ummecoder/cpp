#include <iostream>
using namespace std;

int main() {
    int i = 10;
    
    cout << "Even numbers from 10 to 2:" << endl;
    
    while(i >= 2) {
        cout << i << " ";
        i = i - 2;  // decrement by 2
    }
    
    return 0;
}