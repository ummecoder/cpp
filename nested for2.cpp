#include <iostream>
using namespace std;
int main() {
    for(int i = 5; i >= 1; i--) {       // 5 se 1 tak
        for(int j = 1; j <= i; j++) {   // jitni row utne *
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}