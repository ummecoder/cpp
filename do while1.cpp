#include <iostream>
using namespace std;

int main() {
    int i = 1;
    
    cout << "Numbers from 1 to 5:" << endl;
    
    do {
        cout << i << " ";
        i++;  // increment
    } while(i <= 5);  // condition check at end
    
    return 0;
}