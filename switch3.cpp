#include <iostream>
using namespace std;

int main() {
    char ch;
    cout << "Enter an alphabet: ";
    cin >> ch;
    
    switch(ch) {
        case 'a':
            cout << ch << " is a Vowel";
            break;
        case 'e':
            cout << ch << " is a Vowel";
            break;
        case 'i':
            cout << ch << " is a Vowel";
            break;
        case 'o':
            cout << ch << " is a Vowel";
            break;
        case 'u':
            cout << ch << " is a Vowel";
            break;
        case 'A':
            cout << ch << " is a Vowel";
            break;
        case 'E':
            cout << ch << " is a Vowel";
            break;
        case 'I':
            cout << ch << " is a Vowel";
            break;
        case 'O':
            cout << ch << " is a Vowel";
            break;
        case 'U':
            cout << ch << " is a Vowel";
            break;
        default:
            cout << ch << " is a Consonant";
    }
    
    return 0;
}