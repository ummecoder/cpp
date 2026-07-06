#include <iostream>
using namespace std;

int main() {
    cout << "Even numbers from 1 to 20:" << endl;
    
    for(int i = 2; i <= 20; i = i + 2) {  // increment by 2
        cout << i << " ";
    }
    
    return 0;
}