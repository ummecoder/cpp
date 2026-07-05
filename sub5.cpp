#include <iostream>
using namespace std;
int main()
{
    int total, spent, remaining;
    cout << "Enter total money: ";
    cin >> total;
    cout << "Enter money spent: ";
    cin >> spent;
    remaining = total - spent;
    cout << "Remaining balance: " << remaining << endl;
    return 0;
}