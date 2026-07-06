#include <iostream>
using namespace std;
int main() {
    for(int i = 1; i <= 3; i++) {        // kis ki table
        for(int j = 1; j <= 10; j++) {   // 1 se 10 tak
            cout << i << " x " << j << " = " << i*j << endl;
        }
        cout << "-----------" << endl;
    }
    return 0;
}