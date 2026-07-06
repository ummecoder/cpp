#include <iostream>
using namespace std;

int main() {
    int i = 1;
    
    cout << "Printing numbers using Do-While loop:" << endl;
    
    do {
        cout << "Number: " << i << endl;
        i++;  // increment
    } while(i <= 5);
    
    cout << "Loop finished!" << endl;
    
    return 0;
}