// Simple pair

#include <iostream>
using namespace std;

int main()
{
    pair<int, int> p;

    cout << "Enter two numbers: ";
    cin >> p.first >> p.second;

    cout << "First = " << p.first << endl;
    cout << "Second = " << p.second << endl;

    return 0;
}