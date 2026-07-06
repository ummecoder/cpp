#include <iostream>
using namespace std;
int main() {
    for(int i = 1; i <= 4; i++) {       // outer loop = rows
        for(int j = 1; j <= 4; j++) {   // inner loop = columns
            cout << "* ";
        }
        cout << endl;  // new line
    }
    return 0;
}