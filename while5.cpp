#include <iostream>
using namespace std;

int main() {
    int i = 2;
    
    cout << "Even numbers from 2 to 20:" << endl;
    
    while(i <= 20) {
        cout << i << " ";
        i = i + 2;  // increment by 2
    }
    
    return 0;
}