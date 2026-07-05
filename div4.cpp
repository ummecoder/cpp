#include <iostream>
using namespace std;
int main()
{
    float total, subjects, average;
    cout << "Enter total marks: ";
    cin >> total;
    cout << "Enter number of subjects: ";
    cin >> subjects;
    average = total / subjects;
    cout << "Average: " << average << endl;
    return 0;
}