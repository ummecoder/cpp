#include <iostream>
using namespace std;
int main() {
    for(int i = 1; i <= 4; i++) {       // rows
        for(int j = 1; j <= i; j++) {   // columns
            cout << i << " ";           // row number print
        }
        cout << endl;
    }
    return 0;
}