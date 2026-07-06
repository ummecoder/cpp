#include <iostream>
using namespace std;
int main() {
    char light;
    cout << "Enter traffic light color R/G/Y: ";
    cin >> light;
    
    switch(light) {
        case 'R':
        case 'r':
            cout << "Stop";
            break;
        case 'Y':
        case 'y':
            cout << "Get Ready";
            break;
        case 'G':
        case 'g':
            cout << "Go";
            break;
        default:
            cout << "Invalid color";
    }
    return 0;
}