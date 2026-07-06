#include <iostream>
using namespace std;
int main()
{
    float total_money, people, each;
    cout << "Enter total money: ";
    cin >> total_money;
    cout << "Enter number of people: ";
    cin >> people;
    each = total_money / people;
    cout << "Each person gets: " << each << endl;
    return 0;
}