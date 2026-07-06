#include <iostream>
using namespace std;
int main() {
    for(int i = 1; i <= 5; i++) {       // rows
        for(int j = 1; j <= i; j++) {   // har row me i numbers
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}